/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --font /Users/vaja/SquareLine/assets/digital-7.ttf -o /Users/vaja/SquareLine/assets/ui_font_digismall.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_DIGISMALL
#define UI_FONT_DIGISMALL 1
#endif

#if UI_FONT_DIGISMALL

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xed,

    /* U+0022 "\"" */
    0xb4,

    /* U+0023 "#" */
    0x55, 0x55, 0x55, 0x0,

    /* U+0024 "$" */
    0x21, 0x3f, 0x4a, 0x43, 0xe5, 0x2f, 0xc8, 0x40,

    /* U+0025 "%" */
    0xea, 0xaf, 0x4, 0x20, 0xf5, 0x57,

    /* U+0026 "&" */
    0xf4, 0xa5, 0xf, 0x46, 0x3f, 0x8,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x72, 0x49, 0x23,

    /* U+0029 ")" */
    0xc4, 0x92, 0x4e,

    /* U+002A "*" */
    0x5f, 0xa0,

    /* U+002B "+" */
    0x5d, 0x0,

    /* U+002C "," */
    0xc0,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x11, 0x22, 0x44, 0x88,

    /* U+0030 "0" */
    0xfc, 0x63, 0x18, 0xc6, 0x3f,

    /* U+0031 "1" */
    0xff,

    /* U+0032 "2" */
    0xf8, 0x42, 0x1f, 0xc2, 0x1e,

    /* U+0033 "3" */
    0xf8, 0x42, 0x17, 0x84, 0x3f,

    /* U+0034 "4" */
    0xc, 0x63, 0x1f, 0x84, 0x21, 0x0,

    /* U+0035 "5" */
    0xf4, 0x21, 0xf, 0x84, 0x3f,

    /* U+0036 "6" */
    0xf4, 0x21, 0xf, 0xc6, 0x3f,

    /* U+0037 "7" */
    0xfc, 0x63, 0x10, 0x84, 0x21,

    /* U+0038 "8" */
    0xfc, 0x63, 0x1f, 0xc6, 0x3f,

    /* U+0039 "9" */
    0xfc, 0x63, 0x1f, 0x84, 0x3f,

    /* U+003A ":" */
    0x90,

    /* U+003B ";" */
    0x87,

    /* U+003C "<" */
    0x69,

    /* U+003D "=" */
    0xe3, 0x80,

    /* U+003E ">" */
    0x96,

    /* U+003F "?" */
    0xf8, 0x42, 0x1f, 0xc0, 0x10,

    /* U+0040 "@" */
    0xfc, 0x6f, 0x5a, 0xde, 0x1e,

    /* U+0041 "A" */
    0xfc, 0x63, 0x1f, 0xc6, 0x31, 0x80,

    /* U+0042 "B" */
    0xf4, 0x63, 0x1f, 0xc6, 0x3e,

    /* U+0043 "C" */
    0xf8, 0x88, 0x88, 0x8f,

    /* U+0044 "D" */
    0xf4, 0x63, 0x18, 0xc6, 0x3e,

    /* U+0045 "E" */
    0xf8, 0x88, 0xf8, 0x8f,

    /* U+0046 "F" */
    0xf8, 0x88, 0xf8, 0x88, 0x80,

    /* U+0047 "G" */
    0xf4, 0x21, 0x3, 0xc6, 0x3f,

    /* U+0048 "H" */
    0xc, 0x63, 0x1f, 0xc6, 0x31, 0x80,

    /* U+0049 "I" */
    0xff,

    /* U+004A "J" */
    0x8, 0x42, 0x18, 0xc6, 0x3f,

    /* U+004B "K" */
    0x8c, 0xa9, 0x8f, 0xc6, 0x31, 0x80,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x1f,

    /* U+004D "M" */
    0xfd, 0x6b, 0x58, 0xc6, 0x31,

    /* U+004E "N" */
    0xcf, 0x6e, 0x8, 0xc6, 0x31,

    /* U+004F "O" */
    0x74, 0x63, 0x18, 0xc6, 0x2e,

    /* U+0050 "P" */
    0xf4, 0x63, 0x1f, 0xc2, 0x10, 0x80,

    /* U+0051 "Q" */
    0xfc, 0x63, 0x18, 0xc6, 0x5d,

    /* U+0052 "R" */
    0xfc, 0x63, 0x17, 0x72, 0xd3,

    /* U+0053 "S" */
    0xfc, 0x21, 0xf, 0x84, 0x3f,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x84,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xc6, 0x3f,

    /* U+0056 "V" */
    0x8c, 0x63, 0x18, 0xc5, 0x40,

    /* U+0057 "W" */
    0x8c, 0x63, 0x1a, 0xd6, 0xbf,

    /* U+0058 "X" */
    0x99, 0x66, 0x66, 0x99,

    /* U+0059 "Y" */
    0xc, 0x63, 0x1f, 0x84, 0x3f,

    /* U+005A "Z" */
    0xf1, 0x22, 0x44, 0x8f,

    /* U+005B "[" */
    0xea, 0xab,

    /* U+005C "\\" */
    0x88, 0x44, 0x22, 0x11,

    /* U+005D "]" */
    0xd5, 0x57,

    /* U+005E "^" */
    0x62, 0xa2,

    /* U+005F "_" */
    0xf0,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0xfc, 0x63, 0x1f, 0xc6, 0x31, 0x80,

    /* U+0062 "b" */
    0xf4, 0x63, 0x1f, 0xc6, 0x3e,

    /* U+0063 "c" */
    0xf8, 0x88, 0x88, 0x8f,

    /* U+0064 "d" */
    0xf4, 0x63, 0x18, 0xc6, 0x3e,

    /* U+0065 "e" */
    0xf8, 0x88, 0xf8, 0x8f,

    /* U+0066 "f" */
    0xf8, 0x88, 0xf8, 0x88, 0x80,

    /* U+0067 "g" */
    0xf4, 0x21, 0x3, 0xc6, 0x3f,

    /* U+0068 "h" */
    0xc, 0x63, 0x1f, 0xc6, 0x31, 0x80,

    /* U+0069 "i" */
    0xff,

    /* U+006A "j" */
    0x8, 0x42, 0x18, 0xc6, 0x3f,

    /* U+006B "k" */
    0x8c, 0xa9, 0x8f, 0xc6, 0x31, 0x80,

    /* U+006C "l" */
    0x84, 0x21, 0x8, 0x42, 0x1f,

    /* U+006D "m" */
    0xfd, 0x6b, 0x58, 0xc6, 0x31,

    /* U+006E "n" */
    0xcf, 0x6e, 0x8, 0xc6, 0x31,

    /* U+006F "o" */
    0x74, 0x63, 0x18, 0xc6, 0x2e,

    /* U+0070 "p" */
    0xf4, 0x63, 0x1f, 0xc2, 0x10, 0x80,

    /* U+0071 "q" */
    0xfc, 0x63, 0x18, 0xc6, 0x5d,

    /* U+0072 "r" */
    0xfc, 0x63, 0x17, 0x72, 0xd3,

    /* U+0073 "s" */
    0xfc, 0x21, 0xf, 0x84, 0x3f,

    /* U+0074 "t" */
    0xf9, 0x8, 0x42, 0x10, 0x84,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xc6, 0x3f,

    /* U+0076 "v" */
    0x8c, 0x63, 0x18, 0xc5, 0x40,

    /* U+0077 "w" */
    0x8c, 0x63, 0x1a, 0xd6, 0xbf,

    /* U+0078 "x" */
    0x99, 0x66, 0x66, 0x99,

    /* U+0079 "y" */
    0xc, 0x63, 0x1f, 0x84, 0x3f,

    /* U+007A "z" */
    0xf1, 0x22, 0x44, 0x8f,

    /* U+007B "{" */
    0x69, 0x28, 0x93,

    /* U+007C "|" */
    0xff,

    /* U+007D "}" */
    0xc9, 0x22, 0x96,

    /* U+007E "~" */
    0xd2
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 52, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 31, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 60, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3, .adv_w = 94, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 7, .adv_w = 91, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 15, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 98, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 27, .adv_w = 31, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 28, .adv_w = 61, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 61, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 75, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 36, .adv_w = 77, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 38, .adv_w = 31, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 39, .adv_w = 77, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 40, .adv_w = 31, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 91, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 31, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 67, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 31, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 93, .adv_w = 31, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 94, .adv_w = 65, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 95, .adv_w = 77, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 97, .adv_w = 65, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 98, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 114, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 84, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 84, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 84, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 137, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 148, .adv_w = 31, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 160, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 186, .adv_w = 93, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 91, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 91, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 54, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 90, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 54, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 91, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 244, .adv_w = 91, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 49, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 246, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 252, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 84, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 84, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 84, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 275, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 286, .adv_w = 31, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 298, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 324, .adv_w = 93, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 91, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 91, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 75, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 31, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 75, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 94, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_digismall = {
#else
lv_font_t ui_font_digismall = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_DIGISMALL*/

