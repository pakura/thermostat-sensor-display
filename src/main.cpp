#include <Arduino.h>
#include <lvgl.h>
#include "LGFX_Config.h"
#include "ui/ui.h"

LGFX lcd;

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

void setup() {
  lcd.init();
  lcd.setRotation(0);
  lcd.setBrightness(150);

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
}

void loop() {
  lv_timer_handler();
  lv_tick_inc(5);
  delay(5);
}