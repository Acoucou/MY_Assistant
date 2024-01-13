/*******************************************************************************
 * Size: 14 px
 * Bpp: 4
 * Opts: --bpp 4 --size 14 --font C:\Users\liu\Desktop\Project\squareline\chat_gpt_new_gui\assets\pingfang.otf -o C:\Users\liu\Desktop\Project\squareline\chat_gpt_new_gui\assets\ui_font_PingFangEN14.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_PINGFANGEN14
#define UI_FONT_PINGFANGEN14 1
#endif

#if UI_FONT_PINGFANGEN14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x4f, 0x4, 0xf0, 0x3e, 0x3, 0xe0, 0x3d, 0x2,
    0xd0, 0x2c, 0x1, 0xa0, 0x0, 0x3, 0xa0, 0x5e,
    0x0,

    /* U+0022 "\"" */
    0xd4, 0x4d, 0xd3, 0x4c, 0xc3, 0x3c, 0x82, 0x28,

    /* U+0023 "#" */
    0x0, 0xd, 0x0, 0xe0, 0x0, 0x2, 0xb0, 0x1c,
    0x0, 0x0, 0x4a, 0x3, 0xa0, 0x0, 0xef, 0xfe,
    0xff, 0xd0, 0x0, 0x95, 0x8, 0x60, 0x0, 0xb,
    0x30, 0xa4, 0x0, 0x0, 0xd1, 0xd, 0x10, 0x0,
    0xe, 0x0, 0xe0, 0x0, 0x8e, 0xfe, 0xef, 0xe6,
    0x0, 0x4a, 0x4, 0xa0, 0x0, 0x7, 0x70, 0x77,
    0x0, 0x0,

    /* U+0024 "$" */
    0x0, 0x1, 0x40, 0x0, 0x0, 0x2, 0x80, 0x0,
    0x1, 0xaf, 0xfc, 0x40, 0xc, 0xa5, 0x97, 0xf1,
    0x1f, 0x12, 0x80, 0xb6, 0xf, 0x32, 0x80, 0x0,
    0x8, 0xf9, 0x80, 0x0, 0x0, 0x5c, 0xfa, 0x20,
    0x0, 0x2, 0x99, 0xf3, 0x27, 0x2, 0x80, 0xa9,
    0x1f, 0x12, 0x80, 0x8a, 0xb, 0xb5, 0x95, 0xe5,
    0x1, 0xae, 0xfd, 0x60, 0x0, 0x2, 0x80, 0x0,
    0x0, 0x1, 0x40, 0x0,

    /* U+0025 "%" */
    0x2, 0xcd, 0x80, 0x0, 0x2c, 0x0, 0x0, 0xc5,
    0xd, 0x30, 0xa, 0x40, 0x0, 0xf, 0x10, 0xa6,
    0x2, 0xb0, 0x0, 0x0, 0xf1, 0xa, 0x60, 0xa4,
    0x0, 0x0, 0xb, 0x60, 0xe2, 0x2b, 0x0, 0x0,
    0x0, 0x1b, 0xc6, 0xa, 0x31, 0xad, 0x70, 0x0,
    0x0, 0x2, 0xb0, 0x98, 0xc, 0x40, 0x0, 0x0,
    0xa3, 0xd, 0x30, 0x88, 0x0, 0x0, 0x3b, 0x0,
    0xd3, 0x8, 0x80, 0x0, 0xb, 0x30, 0xa, 0x70,
    0xc5, 0x0, 0x3, 0xb0, 0x0, 0x1c, 0xd9, 0x0,

    /* U+0026 "&" */
    0x0, 0x5d, 0xfb, 0x10, 0x0, 0x1, 0xf5, 0x1b,
    0x90, 0x0, 0x2, 0xf0, 0x7, 0xa0, 0x0, 0x0,
    0xc7, 0x2e, 0x40, 0x0, 0x0, 0x2f, 0xe5, 0x1,
    0x40, 0x3, 0xeb, 0xe3, 0x5, 0xc0, 0x1e, 0x70,
    0x6e, 0x27, 0xa0, 0x4d, 0x0, 0x7, 0xdd, 0x60,
    0x4d, 0x0, 0x0, 0xbf, 0x10, 0xe, 0x92, 0x38,
    0xfc, 0xb0, 0x2, 0xae, 0xeb, 0x30, 0xd8,

    /* U+0027 "'" */
    0xd4, 0xd3, 0xc3, 0x82,

    /* U+0028 "(" */
    0x0, 0x5a, 0x0, 0xd3, 0x4, 0xc0, 0xa, 0x60,
    0xe, 0x20, 0x1f, 0x0, 0x2f, 0x0, 0x2f, 0x0,
    0x1f, 0x0, 0xe, 0x20, 0xa, 0x60, 0x4, 0xc0,
    0x0, 0xd3, 0x0, 0x5a,

    /* U+0029 ")" */
    0xe, 0x10, 0x8, 0x70, 0x2, 0xe0, 0x0, 0xc5,
    0x0, 0x89, 0x0, 0x5b, 0x0, 0x4c, 0x0, 0x4c,
    0x0, 0x5b, 0x0, 0x89, 0x0, 0xc5, 0x2, 0xe0,
    0x8, 0x70, 0xe, 0x10,

    /* U+002A "*" */
    0x0, 0xe, 0x0, 0x0, 0x0, 0xe0, 0x0, 0x8b,
    0x5d, 0x4b, 0x90, 0x4a, 0xfb, 0x40, 0x0, 0xa9,
    0xb0, 0x0, 0x7a, 0x9, 0x80, 0x3, 0x10, 0x4,
    0x0,

    /* U+002B "+" */
    0x0, 0x3, 0xb0, 0x0, 0x0, 0x3, 0xb0, 0x0,
    0x0, 0x3, 0xb0, 0x0, 0x0, 0x3, 0xb0, 0x0,
    0x4e, 0xee, 0xfe, 0xeb, 0x1, 0x14, 0xb1, 0x11,
    0x0, 0x3, 0xb0, 0x0, 0x0, 0x3, 0xb0, 0x0,

    /* U+002C "," */
    0xa, 0x60, 0xcd, 0x1, 0xb0, 0xb3, 0x0, 0x0,

    /* U+002D "-" */
    0x4e, 0xee, 0xee, 0xeb, 0x1, 0x11, 0x11, 0x11,

    /* U+002E "." */
    0x95, 0xc7,

    /* U+002F "/" */
    0x0, 0x0, 0xb, 0x40, 0x0, 0x1, 0xe0, 0x0,
    0x0, 0x69, 0x0, 0x0, 0xc, 0x30, 0x0, 0x1,
    0xe0, 0x0, 0x0, 0x78, 0x0, 0x0, 0xd, 0x20,
    0x0, 0x2, 0xd0, 0x0, 0x0, 0x87, 0x0, 0x0,
    0xe, 0x20, 0x0, 0x3, 0xc0, 0x0, 0x0, 0x96,
    0x0, 0x0, 0xe, 0x10, 0x0, 0x4, 0xb0, 0x0,
    0x0,

    /* U+0030 "0" */
    0x0, 0x6d, 0xea, 0x0, 0x5, 0xe4, 0x2a, 0xb0,
    0xc, 0x50, 0x0, 0xe3, 0x1f, 0x0, 0x0, 0xa8,
    0x3e, 0x0, 0x0, 0x89, 0x4d, 0x0, 0x0, 0x7a,
    0x3e, 0x0, 0x0, 0x89, 0x1f, 0x0, 0x0, 0xa8,
    0xc, 0x50, 0x0, 0xe3, 0x5, 0xe4, 0x2a, 0xb0,
    0x0, 0x6d, 0xea, 0x0,

    /* U+0031 "1" */
    0x0, 0x5f, 0x11, 0xad, 0xf1, 0x5a, 0x1f, 0x10,
    0x0, 0xf1, 0x0, 0xf, 0x10, 0x0, 0xf1, 0x0,
    0xf, 0x10, 0x0, 0xf1, 0x0, 0xf, 0x10, 0x0,
    0xf1, 0x0, 0xf, 0x10,

    /* U+0032 "2" */
    0x0, 0x5d, 0xfc, 0x30, 0x5, 0xe4, 0x16, 0xe1,
    0xc, 0x60, 0x0, 0xb6, 0xf, 0x20, 0x0, 0xb7,
    0x0, 0x0, 0x1, 0xf3, 0x0, 0x0, 0x1c, 0x90,
    0x0, 0x3, 0xe9, 0x0, 0x0, 0x5f, 0x60, 0x0,
    0x3, 0xf4, 0x0, 0x0, 0xc, 0x91, 0x11, 0x10,
    0xf, 0xff, 0xff, 0xf8,

    /* U+0033 "3" */
    0x0, 0x7d, 0xfc, 0x40, 0x6, 0xd3, 0x16, 0xf1,
    0xd, 0x40, 0x0, 0xc6, 0x6, 0x0, 0x0, 0xb5,
    0x0, 0x0, 0x6, 0xd1, 0x0, 0x7, 0xff, 0x30,
    0x0, 0x0, 0x3, 0xe3, 0x15, 0x0, 0x0, 0x89,
    0x1f, 0x10, 0x0, 0x99, 0xa, 0xc2, 0x16, 0xf3,
    0x0, 0x9e, 0xfc, 0x40,

    /* U+0034 "4" */
    0x0, 0x0, 0x1e, 0x70, 0x0, 0x0, 0xb, 0xe7,
    0x0, 0x0, 0x7, 0xaa, 0x70, 0x0, 0x3, 0xd0,
    0xa7, 0x0, 0x0, 0xd3, 0xa, 0x70, 0x0, 0x97,
    0x0, 0xa7, 0x0, 0x5b, 0x0, 0xa, 0x70, 0xa,
    0xee, 0xee, 0xff, 0xe1, 0x1, 0x11, 0x1a, 0x81,
    0x0, 0x0, 0x0, 0xa7, 0x0, 0x0, 0x0, 0xa,
    0x70, 0x0,

    /* U+0035 "5" */
    0x9, 0xff, 0xff, 0xf4, 0xa, 0x61, 0x11, 0x10,
    0xb, 0x40, 0x0, 0x0, 0xd, 0x30, 0x0, 0x0,
    0xe, 0x4b, 0xdb, 0x30, 0xf, 0xb4, 0x27, 0xf2,
    0x4, 0x0, 0x0, 0xa8, 0x0, 0x0, 0x0, 0x7a,
    0x2e, 0x0, 0x0, 0xa8, 0xc, 0xa3, 0x17, 0xe1,
    0x1, 0x9e, 0xeb, 0x20,

    /* U+0036 "6" */
    0x0, 0x4c, 0xfc, 0x30, 0x3, 0xe5, 0x28, 0xe1,
    0xa, 0x60, 0x0, 0xc6, 0xf, 0x10, 0x0, 0x0,
    0x2e, 0x19, 0xdb, 0x30, 0x4d, 0xa4, 0x27, 0xf2,
    0x3f, 0x30, 0x0, 0xa8, 0x1f, 0x0, 0x0, 0x7a,
    0xd, 0x30, 0x0, 0xa8, 0x6, 0xd3, 0x16, 0xf1,
    0x0, 0x6d, 0xfc, 0x30,

    /* U+0037 "7" */
    0x8f, 0xff, 0xff, 0xf0, 0x11, 0x11, 0x16, 0xd0,
    0x0, 0x0, 0xa, 0x70, 0x0, 0x0, 0x1f, 0x20,
    0x0, 0x0, 0x6c, 0x0, 0x0, 0x0, 0xc6, 0x0,
    0x0, 0x2, 0xf0, 0x0, 0x0, 0x8, 0xa0, 0x0,
    0x0, 0xe, 0x40, 0x0, 0x0, 0x4e, 0x0, 0x0,
    0x0, 0xa8, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x9e, 0xfb, 0x30, 0xa, 0xb2, 0x16, 0xe1,
    0xf, 0x10, 0x0, 0xb6, 0xe, 0x20, 0x0, 0xc5,
    0x8, 0xa1, 0x5, 0xd1, 0x1, 0xdf, 0xff, 0x30,
    0xd, 0x81, 0x4, 0xe4, 0x5d, 0x0, 0x0, 0x6b,
    0x5d, 0x0, 0x0, 0x6b, 0x1e, 0x81, 0x4, 0xe5,
    0x2, 0xae, 0xfc, 0x60,

    /* U+0039 "9" */
    0x0, 0x8e, 0xea, 0x0, 0x9, 0xc2, 0x29, 0xc0,
    0x1f, 0x10, 0x0, 0xd3, 0x3e, 0x0, 0x0, 0xa8,
    0x2f, 0x0, 0x0, 0xc9, 0xc, 0xa0, 0x7, 0xca,
    0x1, 0xbf, 0xe7, 0x79, 0x0, 0x0, 0x0, 0xa6,
    0xd, 0x30, 0x0, 0xe1, 0xa, 0xc3, 0x2b, 0x90,
    0x1, 0xae, 0xe8, 0x0,

    /* U+003A ":" */
    0xc7, 0x95, 0x0, 0x0, 0x0, 0x95, 0xc7,

    /* U+003B ";" */
    0xc, 0x70, 0x96, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xa6, 0xc, 0xd0, 0x1b, 0xb, 0x30, 0x0,

    /* U+003C "<" */
    0x0, 0x0, 0x0, 0x26, 0x0, 0x0, 0x2a, 0xe6,
    0x0, 0x3b, 0xe7, 0x0, 0x2b, 0xd6, 0x0, 0x0,
    0x3e, 0xa2, 0x0, 0x0, 0x0, 0x7e, 0xb3, 0x0,
    0x0, 0x0, 0x6d, 0xb3, 0x0, 0x0, 0x0, 0x69,

    /* U+003D "=" */
    0x4e, 0xee, 0xee, 0xeb, 0x1, 0x11, 0x11, 0x11,
    0x0, 0x0, 0x0, 0x0, 0x4e, 0xee, 0xee, 0xeb,
    0x1, 0x11, 0x11, 0x11,

    /* U+003E ">" */
    0x35, 0x0, 0x0, 0x0, 0x2b, 0xd6, 0x0, 0x0,
    0x0, 0x3b, 0xe7, 0x0, 0x0, 0x0, 0x2a, 0xe6,
    0x0, 0x0, 0x6, 0xe9, 0x0, 0x7, 0xea, 0x30,
    0x18, 0xea, 0x20, 0x0, 0x49, 0x20, 0x0, 0x0,

    /* U+003F "?" */
    0x1, 0xae, 0xe8, 0x0, 0xb9, 0x23, 0xe7, 0x2f,
    0x10, 0x7, 0xb2, 0x70, 0x0, 0x7b, 0x0, 0x0,
    0x1e, 0x50, 0x0, 0x1d, 0x80, 0x0, 0x9, 0xa0,
    0x0, 0x0, 0xd5, 0x0, 0x0, 0x2, 0x0, 0x0,
    0x0, 0xa3, 0x0, 0x0, 0xe, 0x50, 0x0,

    /* U+0040 "@" */
    0x0, 0x4, 0xad, 0xdc, 0x60, 0x0, 0x0, 0x8c,
    0x20, 0x1, 0xa9, 0x0, 0x5, 0xb0, 0x2b, 0xd6,
    0x7a, 0x40, 0xd, 0x20, 0xe6, 0x1d, 0x72, 0xa0,
    0x1d, 0x7, 0xa0, 0xb, 0x30, 0xc0, 0x3b, 0xb,
    0x40, 0xd, 0x1, 0xb0, 0x1d, 0xc, 0x20, 0x2c,
    0x6, 0x70, 0xe, 0xa, 0x70, 0xba, 0x2c, 0x0,
    0x7, 0x91, 0xcc, 0x4b, 0xb3, 0x70, 0x0, 0xb9,
    0x10, 0x0, 0x4c, 0x60, 0x0, 0x5, 0xbc, 0xdd,
    0x92, 0x0,

    /* U+0041 "A" */
    0x0, 0x3, 0xf7, 0x0, 0x0, 0x0, 0x9, 0xdc,
    0x0, 0x0, 0x0, 0xe, 0x3f, 0x20, 0x0, 0x0,
    0x5d, 0xa, 0x80, 0x0, 0x0, 0xa8, 0x5, 0xd0,
    0x0, 0x0, 0xf3, 0x0, 0xf3, 0x0, 0x6, 0xd0,
    0x0, 0xa9, 0x0, 0xb, 0xfe, 0xee, 0xfe, 0x0,
    0x1f, 0x31, 0x11, 0x2e, 0x40, 0x7c, 0x0, 0x0,
    0x9, 0xa0, 0xd6, 0x0, 0x0, 0x3, 0xf0,

    /* U+0042 "B" */
    0xff, 0xff, 0xfd, 0x50, 0xf2, 0x0, 0x16, 0xf2,
    0xf2, 0x0, 0x0, 0xb6, 0xf2, 0x0, 0x0, 0xb5,
    0xf2, 0x0, 0x4, 0xe1, 0xfe, 0xee, 0xff, 0x50,
    0xf3, 0x11, 0x14, 0xd6, 0xf2, 0x0, 0x0, 0x5d,
    0xf2, 0x0, 0x0, 0x5d, 0xf2, 0x0, 0x14, 0xd8,
    0xff, 0xff, 0xfd, 0x80,

    /* U+0043 "C" */
    0x0, 0x19, 0xdf, 0xc6, 0x0, 0x2, 0xda, 0x42,
    0x5d, 0x90, 0xa, 0x90, 0x0, 0x1, 0xf2, 0x1f,
    0x10, 0x0, 0x0, 0x52, 0x4d, 0x0, 0x0, 0x0,
    0x0, 0x5c, 0x0, 0x0, 0x0, 0x0, 0x4d, 0x0,
    0x0, 0x0, 0x0, 0x2f, 0x10, 0x0, 0x0, 0x86,
    0xb, 0x80, 0x0, 0x2, 0xf2, 0x2, 0xe9, 0x32,
    0x5d, 0x70, 0x0, 0x1a, 0xdf, 0xc5, 0x0,

    /* U+0044 "D" */
    0xff, 0xff, 0xd9, 0x10, 0xf, 0x30, 0x13, 0xae,
    0x20, 0xf2, 0x0, 0x0, 0x9a, 0xf, 0x20, 0x0,
    0x1, 0xf0, 0xf2, 0x0, 0x0, 0xf, 0x2f, 0x20,
    0x0, 0x0, 0xd4, 0xf2, 0x0, 0x0, 0xf, 0x2f,
    0x20, 0x0, 0x2, 0xf0, 0xf2, 0x0, 0x0, 0xa9,
    0xf, 0x30, 0x14, 0xbd, 0x10, 0xff, 0xff, 0xd9,
    0x0, 0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xf1, 0xf3, 0x0, 0x0, 0x0,
    0xf2, 0x0, 0x0, 0x0, 0xf2, 0x0, 0x0, 0x0,
    0xf2, 0x0, 0x0, 0x0, 0xff, 0xee, 0xee, 0xb0,
    0xf4, 0x11, 0x11, 0x10, 0xf2, 0x0, 0x0, 0x0,
    0xf2, 0x0, 0x0, 0x0, 0xf3, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xf5,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0xbf, 0x30, 0x0, 0x0, 0xf2,
    0x0, 0x0, 0xf, 0x20, 0x0, 0x0, 0xf2, 0x0,
    0x0, 0xf, 0xfe, 0xee, 0xe6, 0xf4, 0x11, 0x11,
    0xf, 0x20, 0x0, 0x0, 0xf2, 0x0, 0x0, 0xf,
    0x20, 0x0, 0x0, 0xf2, 0x0, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x19, 0xdf, 0xd7, 0x0, 0x1, 0xda, 0x42,
    0x5d, 0xb0, 0xa, 0xa0, 0x0, 0x1, 0xe4, 0x1f,
    0x10, 0x0, 0x0, 0x43, 0x4d, 0x0, 0x0, 0x0,
    0x0, 0x5c, 0x0, 0xa, 0xee, 0xe8, 0x4d, 0x0,
    0x1, 0x11, 0xa8, 0x1f, 0x10, 0x0, 0x0, 0x98,
    0xa, 0x90, 0x0, 0x0, 0x98, 0x2, 0xda, 0x41,
    0x38, 0xf7, 0x0, 0x19, 0xdf, 0xda, 0x40,

    /* U+0048 "H" */
    0xf2, 0x0, 0x0, 0xf, 0x1f, 0x20, 0x0, 0x0,
    0xf1, 0xf2, 0x0, 0x0, 0xf, 0x1f, 0x20, 0x0,
    0x0, 0xf1, 0xf2, 0x0, 0x0, 0xf, 0x1f, 0xfe,
    0xee, 0xef, 0xf1, 0xf4, 0x11, 0x11, 0x2f, 0x1f,
    0x20, 0x0, 0x0, 0xf1, 0xf2, 0x0, 0x0, 0xf,
    0x1f, 0x20, 0x0, 0x0, 0xf1, 0xf2, 0x0, 0x0,
    0xf, 0x10,

    /* U+0049 "I" */
    0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3,
    0xe3, 0xe3, 0xe3,

    /* U+004A "J" */
    0x0, 0x0, 0xe, 0x30, 0x0, 0x0, 0xe3, 0x0,
    0x0, 0xe, 0x30, 0x0, 0x0, 0xe3, 0x0, 0x0,
    0xe, 0x30, 0x0, 0x0, 0xe3, 0x0, 0x0, 0xe,
    0x38, 0x30, 0x0, 0xe3, 0xa7, 0x0, 0x1f, 0x16,
    0xe3, 0x2a, 0xc0, 0x8, 0xee, 0xb2, 0x0,

    /* U+004B "K" */
    0xf2, 0x0, 0x1, 0xd8, 0xf, 0x20, 0x1, 0xd9,
    0x0, 0xf2, 0x0, 0xca, 0x0, 0xf, 0x20, 0xba,
    0x0, 0x0, 0xf2, 0xac, 0x0, 0x0, 0xf, 0xcc,
    0xf3, 0x0, 0x0, 0xfb, 0x8, 0xe1, 0x0, 0xf,
    0x20, 0xb, 0xc0, 0x0, 0xf2, 0x0, 0xd, 0x90,
    0xf, 0x20, 0x0, 0x2f, 0x60, 0xf2, 0x0, 0x0,
    0x4f, 0x40,

    /* U+004C "L" */
    0xf2, 0x0, 0x0, 0xf, 0x20, 0x0, 0x0, 0xf2,
    0x0, 0x0, 0xf, 0x20, 0x0, 0x0, 0xf2, 0x0,
    0x0, 0xf, 0x20, 0x0, 0x0, 0xf2, 0x0, 0x0,
    0xf, 0x20, 0x0, 0x0, 0xf2, 0x0, 0x0, 0xf,
    0x30, 0x0, 0x0, 0xff, 0xff, 0xff, 0xe0,

    /* U+004D "M" */
    0xfa, 0x0, 0x0, 0x0, 0x4f, 0x5f, 0xf1, 0x0,
    0x0, 0xb, 0xf5, 0xfd, 0x60, 0x0, 0x1, 0xfe,
    0x5f, 0x7d, 0x0, 0x0, 0x7a, 0xc5, 0xf2, 0xe3,
    0x0, 0xd, 0x4c, 0x5f, 0x28, 0x90, 0x4, 0xd0,
    0xc5, 0xf2, 0x2f, 0x0, 0xa7, 0xc, 0x5f, 0x20,
    0xb6, 0x1f, 0x10, 0xc5, 0xf2, 0x5, 0xc7, 0xa0,
    0xc, 0x5f, 0x20, 0xe, 0xe4, 0x0, 0xc5, 0xf2,
    0x0, 0x8e, 0x0, 0xc, 0x50,

    /* U+004E "N" */
    0xf8, 0x0, 0x0, 0x1f, 0xf, 0xf2, 0x0, 0x1,
    0xf0, 0xf9, 0xc0, 0x0, 0x1f, 0xf, 0x2d, 0x60,
    0x1, 0xf0, 0xf2, 0x3e, 0x10, 0x1f, 0xf, 0x20,
    0x9b, 0x1, 0xf0, 0xf2, 0x0, 0xe5, 0x1f, 0xf,
    0x20, 0x5, 0xe2, 0xf0, 0xf2, 0x0, 0xb, 0xaf,
    0xf, 0x20, 0x0, 0x1f, 0xf0, 0xf2, 0x0, 0x0,
    0x7f, 0x0,

    /* U+004F "O" */
    0x0, 0x19, 0xdf, 0xc7, 0x0, 0x0, 0x2d, 0xa4,
    0x25, 0xdb, 0x0, 0xa, 0xa0, 0x0, 0x0, 0xd6,
    0x1, 0xf1, 0x0, 0x0, 0x5, 0xd0, 0x4d, 0x0,
    0x0, 0x0, 0x2f, 0x5, 0xc0, 0x0, 0x0, 0x0,
    0xf1, 0x4d, 0x0, 0x0, 0x0, 0x2f, 0x1, 0xf1,
    0x0, 0x0, 0x5, 0xd0, 0xa, 0x90, 0x0, 0x0,
    0xd6, 0x0, 0x2e, 0xa4, 0x25, 0xdb, 0x0, 0x0,
    0x19, 0xdf, 0xc7, 0x0, 0x0,

    /* U+0050 "P" */
    0xff, 0xff, 0xfc, 0x40, 0xf3, 0x0, 0x16, 0xf2,
    0xf2, 0x0, 0x0, 0xb7, 0xf2, 0x0, 0x0, 0xa7,
    0xf2, 0x0, 0x4, 0xf3, 0xff, 0xee, 0xfe, 0x60,
    0xf4, 0x11, 0x10, 0x0, 0xf2, 0x0, 0x0, 0x0,
    0xf2, 0x0, 0x0, 0x0, 0xf2, 0x0, 0x0, 0x0,
    0xf2, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x19, 0xdf, 0xc7, 0x0, 0x0, 0x2d, 0xa4,
    0x25, 0xdb, 0x0, 0xa, 0xa0, 0x0, 0x0, 0xd6,
    0x1, 0xf1, 0x0, 0x0, 0x5, 0xd0, 0x4d, 0x0,
    0x0, 0x0, 0x2f, 0x5, 0xc0, 0x0, 0x0, 0x0,
    0xf1, 0x4d, 0x0, 0x0, 0x30, 0x1f, 0x1, 0xf1,
    0x0, 0xe, 0x45, 0xd0, 0xa, 0x90, 0x0, 0x3e,
    0xd6, 0x0, 0x2e, 0xa4, 0x24, 0xdf, 0x0, 0x0,
    0x19, 0xdf, 0xd7, 0xb8, 0x0, 0x0, 0x0, 0x0,
    0x1, 0x90,

    /* U+0052 "R" */
    0xff, 0xff, 0xfd, 0x50, 0xf, 0x30, 0x1, 0x5f,
    0x30, 0xf2, 0x0, 0x0, 0xa7, 0xf, 0x20, 0x0,
    0xa, 0x60, 0xf2, 0x0, 0x4, 0xe1, 0xf, 0xfe,
    0xef, 0xf3, 0x0, 0xf4, 0x11, 0x39, 0xe0, 0xf,
    0x20, 0x0, 0xd, 0x40, 0xf2, 0x0, 0x0, 0xb6,
    0xf, 0x20, 0x0, 0x9, 0x90, 0xf2, 0x0, 0x0,
    0x5d, 0x0,

    /* U+0053 "S" */
    0x1, 0x9e, 0xfd, 0x70, 0x0, 0xd9, 0x22, 0x5d,
    0x80, 0x3e, 0x0, 0x0, 0x3f, 0x2, 0xf2, 0x0,
    0x0, 0x50, 0x8, 0xf9, 0x30, 0x0, 0x0, 0x2,
    0x8d, 0xe8, 0x0, 0x0, 0x0, 0x3, 0xbc, 0x5,
    0x70, 0x0, 0x0, 0xe4, 0x4e, 0x0, 0x0, 0xd,
    0x40, 0xcb, 0x32, 0x5a, 0xd0, 0x1, 0x9d, 0xfe,
    0x91, 0x0,

    /* U+0054 "T" */
    0xcf, 0xff, 0xff, 0xff, 0x60, 0x0, 0x4e, 0x0,
    0x0, 0x0, 0x3, 0xe0, 0x0, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x0, 0x3, 0xe0, 0x0, 0x0, 0x0,
    0x3e, 0x0, 0x0, 0x0, 0x3, 0xe0, 0x0, 0x0,
    0x0, 0x3e, 0x0, 0x0, 0x0, 0x3, 0xe0, 0x0,
    0x0, 0x0, 0x3e, 0x0, 0x0, 0x0, 0x3, 0xe0,
    0x0, 0x0,

    /* U+0055 "U" */
    0xf2, 0x0, 0x0, 0x2f, 0xf2, 0x0, 0x0, 0x2f,
    0xf2, 0x0, 0x0, 0x2f, 0xf2, 0x0, 0x0, 0x2f,
    0xf2, 0x0, 0x0, 0x2f, 0xf2, 0x0, 0x0, 0x2f,
    0xf2, 0x0, 0x0, 0x2f, 0xd3, 0x0, 0x0, 0x4d,
    0xb8, 0x0, 0x0, 0x8b, 0x3f, 0x72, 0x27, 0xf3,
    0x3, 0xbe, 0xeb, 0x30,

    /* U+0056 "V" */
    0xc7, 0x0, 0x0, 0x8, 0xb6, 0xd0, 0x0, 0x0,
    0xd5, 0x1f, 0x20, 0x0, 0x3f, 0x0, 0xc7, 0x0,
    0x8, 0xb0, 0x6, 0xc0, 0x0, 0xd5, 0x0, 0x1f,
    0x10, 0x2f, 0x0, 0x0, 0xb6, 0x7, 0xb0, 0x0,
    0x6, 0xc0, 0xd5, 0x0, 0x0, 0x1f, 0x3f, 0x0,
    0x0, 0x0, 0xbd, 0xa0, 0x0, 0x0, 0x6, 0xf5,
    0x0, 0x0,

    /* U+0057 "W" */
    0xc7, 0x0, 0x3, 0xf4, 0x0, 0x7, 0xd8, 0xb0,
    0x0, 0x7f, 0x80, 0x0, 0xb8, 0x4f, 0x0, 0xb,
    0xac, 0x0, 0xe, 0x40, 0xf3, 0x0, 0xf2, 0xf0,
    0x2, 0xf0, 0xc, 0x60, 0x3d, 0xc, 0x30, 0x6c,
    0x0, 0x8a, 0x7, 0x90, 0x87, 0xa, 0x80, 0x3,
    0xe0, 0xb5, 0x4, 0xb0, 0xe4, 0x0, 0xf, 0x2f,
    0x10, 0x1f, 0x2f, 0x0, 0x0, 0xb9, 0xd0, 0x0,
    0xc9, 0xb0, 0x0, 0x7, 0xf9, 0x0, 0x8, 0xf7,
    0x0, 0x0, 0x3f, 0x50, 0x0, 0x4f, 0x30, 0x0,

    /* U+0058 "X" */
    0x5f, 0x10, 0x0, 0x2f, 0x40, 0xbb, 0x0, 0xc,
    0x90, 0x1, 0xf5, 0x6, 0xe0, 0x0, 0x6, 0xe2,
    0xf4, 0x0, 0x0, 0xc, 0xfa, 0x0, 0x0, 0x0,
    0x7f, 0x50, 0x0, 0x0, 0x1e, 0xae, 0x0, 0x0,
    0xa, 0xa0, 0xc9, 0x0, 0x5, 0xf1, 0x2, 0xf3,
    0x1, 0xe6, 0x0, 0x8, 0xd0, 0x9c, 0x0, 0x0,
    0xd, 0x80,

    /* U+0059 "Y" */
    0xab, 0x0, 0x0, 0x7, 0xd0, 0x1e, 0x50, 0x0,
    0x1f, 0x40, 0x6, 0xe0, 0x0, 0xaa, 0x0, 0x0,
    0xc8, 0x4, 0xf1, 0x0, 0x0, 0x3f, 0x2d, 0x70,
    0x0, 0x0, 0x9, 0xed, 0x0, 0x0, 0x0, 0x0,
    0xf4, 0x0, 0x0, 0x0, 0x0, 0xe3, 0x0, 0x0,
    0x0, 0x0, 0xe3, 0x0, 0x0, 0x0, 0x0, 0xe3,
    0x0, 0x0, 0x0, 0x0, 0xe3, 0x0, 0x0,

    /* U+005A "Z" */
    0x3f, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x1c,
    0xb0, 0x0, 0x0, 0x6, 0xe1, 0x0, 0x0, 0x2,
    0xf5, 0x0, 0x0, 0x0, 0xc9, 0x0, 0x0, 0x0,
    0x8d, 0x0, 0x0, 0x0, 0x3f, 0x30, 0x0, 0x0,
    0xd, 0x80, 0x0, 0x0, 0x9, 0xc0, 0x0, 0x0,
    0x4, 0xf3, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xff,
    0xff, 0x60,

    /* U+005B "[" */
    0x5e, 0xee, 0x6, 0xb1, 0x10, 0x6a, 0x0, 0x6,
    0xa0, 0x0, 0x6a, 0x0, 0x6, 0xa0, 0x0, 0x6a,
    0x0, 0x6, 0xa0, 0x0, 0x6a, 0x0, 0x6, 0xa0,
    0x0, 0x6a, 0x0, 0x6, 0xa0, 0x0, 0x6a, 0x0,
    0x6, 0xff, 0xf0,

    /* U+005C "\\" */
    0x4b, 0x0, 0x0, 0x0, 0xe1, 0x0, 0x0, 0x9,
    0x60, 0x0, 0x0, 0x3c, 0x0, 0x0, 0x0, 0xe1,
    0x0, 0x0, 0x8, 0x70, 0x0, 0x0, 0x2d, 0x0,
    0x0, 0x0, 0xd2, 0x0, 0x0, 0x7, 0x80, 0x0,
    0x0, 0x2e, 0x0, 0x0, 0x0, 0xc3, 0x0, 0x0,
    0x6, 0x90, 0x0, 0x0, 0x1e, 0x0, 0x0, 0x0,
    0xb4,

    /* U+005D "]" */
    0x5e, 0xee, 0x0, 0x11, 0xf0, 0x0, 0xf, 0x0,
    0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0,
    0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0,
    0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf,
    0x6, 0xff, 0xf0,

    /* U+005E "^" */
    0x0, 0x2f, 0x60, 0x0, 0x9, 0x8d, 0x0, 0x1,
    0xd0, 0xa4, 0x0, 0x77, 0x3, 0xb0, 0xd, 0x10,
    0xc, 0x20,

    /* U+005F "_" */
    0xee, 0xee, 0xee, 0xe1, 0x11, 0x11, 0x11,

    /* U+0060 "`" */
    0x89, 0x0, 0x95,

    /* U+0061 "a" */
    0x2, 0xad, 0xea, 0x10, 0xe8, 0x12, 0xba, 0x3,
    0x0, 0x3, 0xe0, 0x3b, 0xee, 0xef, 0x1e, 0x60,
    0x2, 0xf5, 0xc0, 0x0, 0x6f, 0x4f, 0x30, 0x5c,
    0xf0, 0x8e, 0xd9, 0x2f,

    /* U+0062 "b" */
    0x1f, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x0, 0x1f, 0x2b, 0xeb, 0x20,
    0x1f, 0xa2, 0x18, 0xe0, 0x1f, 0x30, 0x0, 0xc5,
    0x1f, 0x0, 0x0, 0x98, 0x1f, 0x0, 0x0, 0x98,
    0x1f, 0x30, 0x0, 0xc6, 0x1f, 0xb2, 0x7, 0xe0,
    0x1e, 0x4c, 0xfb, 0x20,

    /* U+0063 "c" */
    0x0, 0x9e, 0xea, 0x10, 0xb, 0xb1, 0x2a, 0xb0,
    0x2f, 0x10, 0x1, 0xb0, 0x5c, 0x0, 0x0, 0x0,
    0x5c, 0x0, 0x0, 0x0, 0x2f, 0x0, 0x2, 0xe1,
    0xb, 0xa1, 0x2b, 0xa0, 0x0, 0xae, 0xea, 0x10,

    /* U+0064 "d" */
    0x0, 0x0, 0x0, 0xc5, 0x0, 0x0, 0x0, 0xc5,
    0x0, 0x0, 0x0, 0xc5, 0x0, 0xae, 0xc4, 0xc5,
    0xb, 0xa1, 0x1a, 0xe5, 0x2f, 0x0, 0x1, 0xf5,
    0x5c, 0x0, 0x0, 0xc5, 0x5c, 0x0, 0x0, 0xc5,
    0x2f, 0x0, 0x0, 0xf5, 0xb, 0xa1, 0x1a, 0xe5,
    0x0, 0xae, 0xd6, 0xb5,

    /* U+0065 "e" */
    0x1, 0xae, 0xe9, 0x0, 0xc, 0x81, 0x1a, 0xa0,
    0x4d, 0x0, 0x0, 0xf1, 0x7f, 0xee, 0xee, 0xf3,
    0x7b, 0x0, 0x0, 0x0, 0x5e, 0x0, 0x2, 0xc0,
    0xd, 0x91, 0x1c, 0x70, 0x1, 0xae, 0xe8, 0x0,

    /* U+0066 "f" */
    0x0, 0x7f, 0xf2, 0x0, 0xe4, 0x0, 0x1, 0xf0,
    0x0, 0xef, 0xff, 0xf0, 0x1, 0xf0, 0x0, 0x1,
    0xf0, 0x0, 0x1, 0xf0, 0x0, 0x1, 0xf0, 0x0,
    0x1, 0xf0, 0x0, 0x1, 0xf0, 0x0, 0x1, 0xf0,
    0x0,

    /* U+0067 "g" */
    0x0, 0xae, 0xd5, 0xb6, 0xb, 0xb1, 0x1a, 0xe6,
    0x2f, 0x10, 0x0, 0xf6, 0x5c, 0x0, 0x0, 0xc6,
    0x5c, 0x0, 0x0, 0xc6, 0x2f, 0x0, 0x0, 0xf6,
    0xb, 0xa1, 0x1a, 0xe6, 0x0, 0xae, 0xd5, 0xb5,
    0x4, 0x0, 0x0, 0xd3, 0xd, 0x80, 0x7, 0xd0,
    0x2, 0xbe, 0xeb, 0x20,

    /* U+0068 "h" */
    0x1f, 0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1, 0xf2, 0xcf, 0xb1, 0x1f, 0xa2,
    0x2c, 0x91, 0xf3, 0x0, 0x6d, 0x1f, 0x0, 0x3,
    0xe1, 0xf0, 0x0, 0x2e, 0x1f, 0x0, 0x2, 0xe1,
    0xf0, 0x0, 0x2e, 0x1f, 0x0, 0x2, 0xe0,

    /* U+0069 "i" */
    0xd, 0x60, 0x94, 0x0, 0x0, 0xc5, 0xc, 0x50,
    0xc5, 0xc, 0x50, 0xc5, 0xc, 0x50, 0xc5, 0xc,
    0x50,

    /* U+006A "j" */
    0x0, 0xb9, 0x0, 0x76, 0x0, 0x0, 0x0, 0x97,
    0x0, 0x97, 0x0, 0x97, 0x0, 0x97, 0x0, 0x97,
    0x0, 0x97, 0x0, 0x97, 0x0, 0x97, 0x0, 0xa7,
    0x1, 0xd6, 0x3f, 0xb0,

    /* U+006B "k" */
    0x1f, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x1c, 0x90,
    0x1f, 0x0, 0xc9, 0x0, 0x1f, 0xc, 0x90, 0x0,
    0x1f, 0xcf, 0x20, 0x0, 0x1f, 0xa8, 0xc0, 0x0,
    0x1f, 0x0, 0xc9, 0x0, 0x1f, 0x0, 0x2f, 0x40,
    0x1f, 0x0, 0x6, 0xe1,

    /* U+006C "l" */
    0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3,
    0xe3, 0xe3, 0xe3,

    /* U+006D "m" */
    0x1f, 0x4d, 0xd7, 0xa, 0xec, 0x20, 0x1f, 0xa1,
    0x3f, 0xc4, 0x19, 0xc0, 0x1f, 0x30, 0xa, 0xa0,
    0x1, 0xf0, 0x1f, 0x0, 0x9, 0x80, 0x0, 0xf1,
    0x1f, 0x0, 0x8, 0x80, 0x0, 0xf1, 0x1f, 0x0,
    0x8, 0x80, 0x0, 0xf1, 0x1f, 0x0, 0x8, 0x80,
    0x0, 0xf1, 0x1f, 0x0, 0x8, 0x80, 0x0, 0xf1,

    /* U+006E "n" */
    0x1f, 0x3c, 0xfb, 0x11, 0xfb, 0x22, 0xc9, 0x1f,
    0x20, 0x4, 0xd1, 0xf0, 0x0, 0x2f, 0x1f, 0x0,
    0x2, 0xf1, 0xf0, 0x0, 0x2f, 0x1f, 0x0, 0x2,
    0xf1, 0xf0, 0x0, 0x2f,

    /* U+006F "o" */
    0x0, 0x8e, 0xea, 0x10, 0xa, 0xb2, 0x19, 0xd0,
    0x2f, 0x10, 0x0, 0xd5, 0x5c, 0x0, 0x0, 0x98,
    0x5c, 0x0, 0x0, 0x98, 0x2f, 0x10, 0x0, 0xd5,
    0xa, 0xb2, 0x19, 0xd0, 0x0, 0x8e, 0xea, 0x10,

    /* U+0070 "p" */
    0x1e, 0x3c, 0xeb, 0x10, 0x1f, 0xb2, 0x18, 0xe0,
    0x1f, 0x30, 0x0, 0xc5, 0x1f, 0x0, 0x0, 0x98,
    0x1f, 0x0, 0x0, 0x98, 0x1f, 0x30, 0x0, 0xc6,
    0x1f, 0xa2, 0x17, 0xe0, 0x1f, 0x2c, 0xfb, 0x20,
    0x1f, 0x0, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x0,
    0x1f, 0x0, 0x0, 0x0,

    /* U+0071 "q" */
    0x0, 0xae, 0xd5, 0xb5, 0xb, 0xa1, 0x1a, 0xe5,
    0x2f, 0x0, 0x1, 0xf5, 0x5c, 0x0, 0x0, 0xc5,
    0x5c, 0x0, 0x0, 0xc5, 0x2f, 0x0, 0x1, 0xf5,
    0xb, 0xa1, 0x1a, 0xe5, 0x0, 0xae, 0xc4, 0xc5,
    0x0, 0x0, 0x0, 0xc5, 0x0, 0x0, 0x0, 0xc5,
    0x0, 0x0, 0x0, 0xc5,

    /* U+0072 "r" */
    0x1f, 0x3c, 0xf0, 0x1f, 0xd5, 0x40, 0x1f, 0x40,
    0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f,
    0x0, 0x0, 0x1f, 0x0, 0x0, 0x1f, 0x0, 0x0,

    /* U+0073 "s" */
    0x6, 0xdf, 0xd5, 0x3, 0xf4, 0x15, 0xf2, 0x4e,
    0x10, 0x4, 0x20, 0x8f, 0xb6, 0x10, 0x0, 0x5,
    0xae, 0x24, 0x60, 0x0, 0xa8, 0x3f, 0x40, 0x3e,
    0x60, 0x6d, 0xfe, 0x90,

    /* U+0074 "t" */
    0x0, 0x40, 0x0, 0x4c, 0x0, 0x4, 0xc0, 0xc,
    0xff, 0xf9, 0x4, 0xc0, 0x0, 0x4c, 0x0, 0x4,
    0xc0, 0x0, 0x4c, 0x0, 0x4, 0xc0, 0x0, 0x3e,
    0x0, 0x0, 0xcf, 0x60,

    /* U+0075 "u" */
    0x1f, 0x0, 0x2, 0xf1, 0xf0, 0x0, 0x2f, 0x1f,
    0x0, 0x2, 0xf1, 0xf0, 0x0, 0x2f, 0x1f, 0x0,
    0x2, 0xf0, 0xf1, 0x0, 0x7f, 0xd, 0x91, 0x3d,
    0xf0, 0x3c, 0xfb, 0x3f,

    /* U+0076 "v" */
    0xc7, 0x0, 0xb, 0x76, 0xc0, 0x0, 0xf2, 0x1f,
    0x10, 0x5d, 0x0, 0xb6, 0xa, 0x70, 0x6, 0xb0,
    0xf2, 0x0, 0x1f, 0x6c, 0x0, 0x0, 0xbe, 0x70,
    0x0, 0x5, 0xf1, 0x0,

    /* U+0077 "w" */
    0xc6, 0x0, 0x5e, 0x0, 0xd, 0x57, 0xb0, 0xa,
    0xf3, 0x2, 0xf0, 0x2f, 0x0, 0xd8, 0x70, 0x6b,
    0x0, 0xd4, 0x2c, 0x3b, 0xb, 0x60, 0x8, 0x86,
    0x80, 0xe0, 0xf1, 0x0, 0x3c, 0xa3, 0xa, 0x7c,
    0x0, 0x0, 0xee, 0x0, 0x6f, 0x70, 0x0, 0x9,
    0xb0, 0x2, 0xf2, 0x0,

    /* U+0078 "x" */
    0x4e, 0x10, 0xd, 0x60, 0x9, 0xa0, 0x8b, 0x0,
    0x0, 0xd8, 0xe1, 0x0, 0x0, 0x4f, 0x60, 0x0,
    0x0, 0x8e, 0xa0, 0x0, 0x3, 0xe2, 0xd5, 0x0,
    0xd, 0x50, 0x4e, 0x10, 0x9b, 0x0, 0x9, 0xb0,

    /* U+0079 "y" */
    0xc7, 0x0, 0x8, 0xb6, 0xc0, 0x0, 0xd5, 0xf,
    0x20, 0x3f, 0x0, 0xa8, 0x8, 0x90, 0x4, 0xd0,
    0xe3, 0x0, 0xe, 0x7e, 0x0, 0x0, 0x8f, 0x80,
    0x0, 0x2, 0xf2, 0x0, 0x0, 0x5c, 0x0, 0x0,
    0xb, 0x70, 0x0, 0x2, 0xf1, 0x0, 0x0,

    /* U+007A "z" */
    0x8f, 0xff, 0xff, 0x30, 0x0, 0x9, 0xc0, 0x0,
    0x4, 0xe1, 0x0, 0x1, 0xe5, 0x0, 0x0, 0xb9,
    0x0, 0x0, 0x7d, 0x0, 0x0, 0x3f, 0x30, 0x0,
    0xa, 0xff, 0xff, 0xf7,

    /* U+007B "{" */
    0x0, 0xbf, 0x50, 0x3d, 0x0, 0x5, 0xa0, 0x0,
    0x5a, 0x0, 0x6, 0xa0, 0x0, 0xa7, 0x0, 0xbc,
    0x0, 0x2, 0xc5, 0x0, 0x6, 0x90, 0x0, 0x5a,
    0x0, 0x5, 0xa0, 0x0, 0x5a, 0x0, 0x2, 0xd0,
    0x0, 0xa, 0xf5,

    /* U+007C "|" */
    0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d,
    0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d,

    /* U+007D "}" */
    0xae, 0x60, 0x0, 0x3e, 0x0, 0x0, 0xf0, 0x0,
    0xf, 0x0, 0x0, 0xf0, 0x0, 0xd, 0x40, 0x0,
    0x3f, 0x50, 0xb, 0x70, 0x0, 0xf1, 0x0, 0xf,
    0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x4, 0xd0,
    0xa, 0xe5, 0x0,

    /* U+007E "~" */
    0x2c, 0xd8, 0x24, 0x55, 0x41, 0x7d, 0xc2,

    /* U+007F "" */

};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 75, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 75, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 25, .adv_w = 134, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 134, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 135, .adv_w = 217, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 163, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 55, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 266, .adv_w = 75, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 294, .adv_w = 75, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 322, .adv_w = 113, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 347, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 59, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 387, .adv_w = 136, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 395, .adv_w = 59, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 112, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 446, .adv_w = 134, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 90, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 134, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 134, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 134, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 134, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 134, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 123, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 788, .adv_w = 134, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 134, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 876, .adv_w = 59, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 59, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 898, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 930, .adv_w = 136, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 950, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 982, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1021, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1087, .adv_w = 147, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1142, .adv_w = 152, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1186, .adv_w = 163, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1241, .adv_w = 158, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1291, .adv_w = 143, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1335, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1374, .adv_w = 168, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1429, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1479, .adv_w = 53, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1490, .adv_w = 116, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1529, .adv_w = 155, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1579, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1618, .adv_w = 198, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1679, .adv_w = 161, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1729, .adv_w = 172, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1790, .adv_w = 144, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1834, .adv_w = 172, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1900, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1950, .adv_w = 142, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2000, .adv_w = 139, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2050, .adv_w = 160, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2094, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2144, .adv_w = 208, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2216, .adv_w = 143, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2266, .adv_w = 148, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2321, .adv_w = 140, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2371, .adv_w = 75, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2406, .adv_w = 112, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2455, .adv_w = 75, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2490, .adv_w = 116, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 2508, .adv_w = 112, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2515, .adv_w = 75, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 2518, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2546, .adv_w = 131, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2590, .adv_w = 123, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2622, .adv_w = 131, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2666, .adv_w = 124, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2698, .adv_w = 84, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2731, .adv_w = 132, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2775, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2814, .adv_w = 57, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2831, .adv_w = 60, .box_w = 4, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 2859, .adv_w = 118, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2903, .adv_w = 53, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2914, .adv_w = 192, .box_w = 12, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2962, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2990, .adv_w = 131, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3022, .adv_w = 131, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3066, .adv_w = 131, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3110, .adv_w = 82, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3134, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3162, .adv_w = 80, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3190, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3218, .adv_w = 108, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3246, .adv_w = 169, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3290, .adv_w = 114, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3322, .adv_w = 111, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3361, .adv_w = 109, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3389, .adv_w = 75, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3424, .adv_w = 44, .box_w = 2, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3439, .adv_w = 75, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3474, .adv_w = 112, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 3481, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
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
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_PingFangEN14 = {
#else
lv_font_t ui_font_PingFangEN14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_PINGFANGEN14*/

