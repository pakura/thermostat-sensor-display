#include <Arduino.h>
#include <math.h>
#include <lvgl.h>
#include "LGFX_Config.h"
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include "ui/ui.h"
#include "secrets.h"
#include <Wire.h>
#include <Adafruit_SHT31.h>


#define POT_PIN 4

LGFX lcd;

const char* ssid = WIFI_SSID;
const char* password = WIFI_PASS;
bool wifiConnected = false;
#define POT_PIN 4;
Adafruit_SHT31 sht31 = Adafruit_SHT31();


unsigned long lastHomeFetch    = 0;
unsigned long lastWeatherFetch = 0;
unsigned long lastPingFetch    = 0;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[170 * 20];

void my_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
  lcd.startWrite();
  lcd.setAddrWindow(area->x1, area->y1,
                    area->x2 - area->x1 + 1,
                    area->y2 - area->y1 + 1);
  lcd.writePixels((uint16_t *)color_p,
                  (area->x2 - area->x1 + 1) *
                  (area->y2 - area->y1 + 1));
  lcd.endWrite();
  lv_disp_flush_ready(disp);
}

void updateUI(JsonObject obj) {
  // temperature
  float temperature = obj["temperature"].as<float>();
  temperature = roundf(temperature * 10) / 10.0f;
  char tempBuf[16];
  snprintf(tempBuf, sizeof(tempBuf), "%.1f", temperature);
  lv_label_set_text(ui_temp, tempBuf);

  // target
  float target = obj["target_temp"].as<float>();
  target = roundf(target * 10) / 10.0f;
  char targetBuf[16];
  snprintf(targetBuf, sizeof(targetBuf), "%.1f", target);
  lv_label_set_text(ui_target, targetBuf);

  // humidity
  int humidity = (int)roundf(obj["humidity"].as<float>());
  char humBuf[16];
  snprintf(humBuf, sizeof(humBuf), "%d", humidity);
  lv_label_set_text(ui_hum, humBuf);

  // cost
  float cost = 0.5f * (obj["target_temp"].as<float>() / 100.0f + 1.0f);
  char costBuf[16];
  snprintf(costBuf, sizeof(costBuf), "%.2f", cost);
  lv_label_set_text(ui_cost, costBuf);

  // power icon
  bool power = obj["power"].as<bool>();
  bool engage = obj["engage"].as<bool>();
  if (power && engage) {
    lv_obj_clear_flag(ui_power, LV_OBJ_FLAG_HIDDEN);
  } else {
    lv_obj_add_flag(ui_power, LV_OBJ_FLAG_HIDDEN);
  }

  Serial.print("humidity: ");    Serial.println(humidity);
  Serial.print("temperature: "); Serial.println(temperature, 1);
  Serial.print("target: ");      Serial.println(target, 1);
  Serial.print("power: ");       Serial.println(power ? "true" : "false");
  Serial.print("engage: ");      Serial.println(engage ? "true" : "false");
}

void fetchHomeData() {
  if (millis() - lastHomeFetch < 10000) return; // ყოველ 10 წამში ერთხელ
  lastHomeFetch = millis();

  if (WiFi.status() != WL_CONNECTED) return;

  WiFiClientSecure client;
  client.setInsecure();

  HTTPClient http;
  String url = "https://" + String(API_KEY) + ".http.ge/api/home";
  http.begin(client, url);

  int code = http.GET();
  if (code == HTTP_CODE_OK) {
    String body = http.getString();
    Serial.println("=== /api/home ===");
    Serial.println(body); // raw response

    JsonDocument doc;
    DeserializationError err = deserializeJson(doc, body);
    if (err) {
      Serial.print("JSON error: ");
      Serial.println(err.c_str());
    } else if (doc.is<JsonArray>()) {
      updateUI(doc[0].as<JsonObject>());
    } else if (doc.is<JsonObject>()) {
      updateUI(doc.as<JsonObject>());
    } else {
      Serial.println("Unexpected JSON type");
    }
  } else {
    Serial.print("HTTP error: ");
    Serial.println(code);
  }

  http.end();
}

void fetchWeatherData() {
  if (millis() - lastWeatherFetch < 900000) return; // ყოველ 15 წუთში ერთხელ
  lastWeatherFetch = millis();

  if (WiFi.status() != WL_CONNECTED) return;

  WiFiClientSecure client;
  client.setInsecure();

  HTTPClient http;
  http.begin(client, "https://api.open-meteo.com/v1/forecast?latitude=41.72&longitude=44.79&hourly=temperature_2m,weather_code&current=temperature_2m,relative_humidity_2m,is_day,rain,showers,snowfall,weather_code,wind_speed_10m,wind_direction_10m");

  int code = http.GET();
  if (code == HTTP_CODE_OK) {
    String body = http.getString();
    Serial.println("=== /weather ===");

    JsonDocument doc;
    DeserializationError err = deserializeJson(doc, body);
    if (err) {
      Serial.print("JSON error: ");
      Serial.println(err.c_str());
    } else {
      JsonObject current = doc["current"].as<JsonObject>();

      float otemp = roundf(current["temperature_2m"].as<float>() * 10) / 10.0f;
      char otempBuf[16];
      snprintf(otempBuf, sizeof(otempBuf), "%.1f", otemp);
      lv_label_set_text(ui_otemp, otempBuf);

      int owin = (int)roundf(current["wind_speed_10m"].as<float>());
      char owinBuf[16];
      snprintf(owinBuf, sizeof(owinBuf), "%d", owin);
      lv_label_set_text(ui_owin, owinBuf);

      int owin1 = (int)roundf(current["relative_humidity_2m"].as<float>());
      char owin1Buf[16];
      snprintf(owin1Buf, sizeof(owin1Buf), "%d", owin1);
      lv_label_set_text(ui_owin1, owin1Buf);

      Serial.print("otemp: ");  Serial.println(otemp, 1);
      Serial.print("owin: ");   Serial.println(owin);
      Serial.print("owin1: ");  Serial.println(owin1);
    }
  } else {
    Serial.print("HTTP error: ");
    Serial.println(code);
  }

  http.end();
}

void updateBrightness() {
  static uint8_t lastBrightness = 0;

  int raw = analogRead(POT_PIN);
  uint8_t brightness = map(raw, 0, 4095, 5, 255);

  if (abs(brightness - lastBrightness) > 2) {
    lastBrightness = brightness;
    lcd.setBrightness(brightness);
  }
}

void sendPing() {
  if (millis() - lastPingFetch < 300000) return; // ყოველ 5 წუთში ერთხელ
  lastPingFetch = millis();

  if (WiFi.status() != WL_CONNECTED) return;

  float temp = sht31.readTemperature();
  float hum  = sht31.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("SHT31 read error");
    return;
  }

  WiFiClientSecure client;
  client.setInsecure();

  HTTPClient http;
  String url = "https://" + String(API_KEY) + ".http.ge/api/ping?temp=" + String(temp, 1) + "&hum=" + String(hum, 0);
  http.begin(client, url);

  int code = http.GET();
  Serial.print("=== /api/ping === ");
  Serial.print(code);
  Serial.print(" | temp="); Serial.print(temp, 1);
  Serial.print(" hum=");    Serial.println(hum, 0);

  http.end();
}

void checkWiFi() {
  static unsigned long lastCheck = 0;

  if (millis() - lastCheck < 1000) return; // ყოველ 1 წამში ერთხელ
  lastCheck = millis();

  if (WiFi.status() == WL_CONNECTED) {
    if (!wifiConnected) {
      wifiConnected = true;

      Serial.println("WiFi Connected!");

      // timer-ები გადაყენდება რომ ეგრევე გაიგზავნოს რექვესტი
      lastHomeFetch    = millis() - 10000;
      lastWeatherFetch = millis() - 900000;
      lastPingFetch    = millis() - 300000;

      // აჩვენე icon
      lv_obj_clear_flag(ui_wifi, LV_OBJ_FLAG_HIDDEN);
    }
  } else {
    if (wifiConnected) {
      wifiConnected = false;

      Serial.println("WiFi Lost!");

      // დამალე icon
      lv_obj_add_flag(ui_wifi, LV_OBJ_FLAG_HIDDEN);
    }
  }
}

void setup() {
  lcd.init();
  lcd.setRotation(0);

  lv_init();

  lv_disp_draw_buf_init(&draw_buf, buf, NULL, 170 * 20);

  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);

  disp_drv.hor_res = 170;
  disp_drv.ver_res = 320;
  disp_drv.flush_cb = my_flush;
  disp_drv.draw_buf = &draw_buf;

  lv_disp_drv_register(&disp_drv);

  lcd.setColorDepth(16);
  lcd.setSwapBytes(true); 

  ui_init(); 
  lv_obj_add_flag(ui_wifi, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(ui_power, LV_OBJ_FLAG_HIDDEN);
  lv_label_set_text(ui_temp,   "--");
  lv_label_set_text(ui_target, "--");
  lv_label_set_text(ui_hum,    "--");
  lv_label_set_text(ui_cost,   "--");
  lv_label_set_text(ui_otemp,  "--");
  lv_label_set_text(ui_owin,   "--");
  lv_label_set_text(ui_owin1,  "--");
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  
  Wire.begin(18, 21); 
  if (!sht31.begin(0x44)) {
    Serial.println("❌ SHT31 cont found");
    while (1);
  }

  Serial.println("SHT31 done");
}

void loop() {
  lv_timer_handler();
  lv_tick_inc(5);
  updateBrightness();
  checkWiFi();
  fetchHomeData();
  fetchWeatherData();
  sendPing();
  delay(5);
}