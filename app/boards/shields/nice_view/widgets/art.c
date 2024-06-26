/*
 *
 * Copyright (c) 2023 Collin Hodge
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BALLOON
#define LV_ATTRIBUTE_IMG_BALLOON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BALLOON uint8_t
    balloon_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x01, 0xff, 
       0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xfe, 0x0c, 0xc8, 
       0x00, 0x7f, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 
       0x02, 0x19, 0x08, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xe0, 0x0c, 0xff, 0xc1, 0x81, 
       0xff, 0xfc, 0x04, 0x06, 0x36, 0x01, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0x00, 0x0c, 0xdb, 
       0x40, 0x01, 0xff, 0xf8, 0x80, 0x02, 0x90, 0xc0, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfe, 0x41, 
       0xb0, 0x00, 0x00, 0xfe, 0x07, 0xf8, 0x00, 0xc0, 0xcc, 0x18, 0x7f, 0xff, 0xff, 0xf0, 0xff, 0xff, 
       0xfc, 0xc9, 0xa0, 0x00, 0x00, 0x7e, 0x07, 0xf8, 0x00, 0x80, 0x68, 0x32, 0x3f, 0xff, 0xff, 0xf0, 
       0xff, 0xff, 0xfc, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe7, 0x71, 0x30, 0x32, 0x86, 0x1f, 0xff, 
       0xff, 0xf0, 0xff, 0xff, 0xfe, 0x12, 0x49, 0x24, 0x00, 0x00, 0x01, 0xe6, 0x18, 0x66, 0x06, 0x84, 
       0x0f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x0f, 0xdb, 0xc0, 0x80, 0x26, 0x01, 0xde, 0x3e, 0x4c, 
       0x09, 0x21, 0x83, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x44, 0x92, 0x42, 0x00, 0x24, 0x01, 0xdb, 
       0x2e, 0x19, 0x8d, 0x60, 0x03, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x02, 0x6d, 0x3c, 0x00, 0xd8, 
       0x00, 0x66, 0x1f, 0x93, 0x01, 0x40, 0x3f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x8b, 0x6d, 0xb5, 
       0x00, 0x58, 0x02, 0x66, 0x4b, 0x86, 0x6d, 0x93, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x20, 
       0x00, 0xd1, 0x00, 0x20, 0x06, 0x67, 0x06, 0x8c, 0xa6, 0x31, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 
       0xfc, 0x04, 0x80, 0x50, 0x40, 0xa0, 0x06, 0x66, 0x87, 0x99, 0x98, 0xe0, 0xff, 0xff, 0xff, 0xf0, 
       0xff, 0xff, 0xfc, 0x00, 0x24, 0x2f, 0xc0, 0x60, 0x06, 0x27, 0xc0, 0x13, 0x53, 0x8c, 0x7f, 0xff, 
       0xff, 0xf0, 0xff, 0xff, 0xfc, 0x00, 0x10, 0x29, 0x00, 0x40, 0x02, 0x67, 0xc0, 0x06, 0x56, 0x58, 
       0x1f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x00, 0x00, 0x58, 0x06, 0x5f, 0xc4, 0xac, 
       0x64, 0x53, 0x0f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x84, 0x80, 0x68, 0x06, 0x5b, 
       0xc5, 0xa9, 0x9b, 0x66, 0x07, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x2f, 0x3f, 0x00, 0x26, 
       0x01, 0x96, 0x01, 0x22, 0xc9, 0xac, 0xe3, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xfe, 0x09, 0x28, 
       0x40, 0x9a, 0x01, 0x96, 0x00, 0x53, 0x2c, 0x99, 0x81, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xfc, 
       0x02, 0x6c, 0x00, 0x49, 0x80, 0x1d, 0xe0, 0x09, 0x33, 0x00, 0x01, 0xff, 0xff, 0xf0, 0xff, 0xff, 
       0xff, 0x81, 0x26, 0xd4, 0x00, 0x26, 0x80, 0x17, 0x78, 0x06, 0x64, 0x00, 0x01, 0xff, 0xff, 0xf0, 
       0xff, 0xff, 0xfe, 0x00, 0xb9, 0x93, 0x40, 0x1a, 0x59, 0xe5, 0x81, 0xb4, 0xcc, 0x1a, 0x79, 0xff, 
       0xff, 0xf0, 0xff, 0xff, 0xfe, 0x44, 0xcb, 0x20, 0x04, 0x1a, 0x51, 0x61, 0x86, 0x49, 0x9a, 0x02, 
       0x3f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x41, 0x5b, 0x2c, 0x0f, 0x81, 0x24, 0x79, 0x62, 0xcb, 
       0x31, 0x84, 0x1f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x33, 0x30, 0x00, 0xff, 0xe4, 0x06, 0x01, 
       0xf8, 0x1a, 0x66, 0x40, 0x1f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x12, 0xa4, 0x10, 0xff, 0xe6, 
       0x00, 0x80, 0xd8, 0x24, 0xc6, 0x40, 0x07, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x4c, 0xc1, 0x00, 
       0xff, 0xe0, 0x01, 0x98, 0x03, 0x31, 0x99, 0xd0, 0x07, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x29, 
       0x48, 0x00, 0xff, 0xe0, 0x00, 0x18, 0x04, 0xc2, 0x2d, 0x30, 0x07, 0xff, 0xff, 0xf0, 0xff, 0xff, 
       0xff, 0x00, 0x00, 0x0f, 0x7f, 0x1e, 0x00, 0x7e, 0x50, 0xd2, 0x11, 0x4d, 0x07, 0xff, 0xff, 0xf0, 
       0xff, 0xff, 0xff, 0x12, 0x20, 0x0f, 0x3f, 0x16, 0x00, 0x7e, 0x11, 0x10, 0x06, 0xc9, 0x43, 0xff, 
       0xff, 0xf0, 0xff, 0xff, 0xfc, 0x00, 0x1c, 0xc1, 0xc0, 0xf6, 0x00, 0x7e, 0x60, 0x61, 0x40, 0x36, 
       0x43, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x0c, 0x1c, 0xc3, 0xc0, 0x6e, 0x00, 0x7e, 0x0c, 0x03, 
       0x40, 0x12, 0x03, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x00, 0xfc, 0xbf, 0x03, 0x69, 0x81, 0xff, 
       0x08, 0x00, 0x90, 0x00, 0x1f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x00, 0xfc, 0xef, 0x03, 0x27, 
       0x81, 0xff, 0x03, 0x02, 0xb3, 0x40, 0x7f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x2d, 
       0x03, 0xde, 0x87, 0xff, 0xc0, 0x1b, 0x20, 0x4b, 0x1f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0x3f, 0x02, 0xdb, 0x87, 0xff, 0xf0, 0x09, 0x61, 0xac, 0x9f, 0xff, 0xff, 0xf0, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0x32, 0xc0, 0xa0, 0x7f, 0xff, 0xf8, 0x06, 0x90, 0x24, 0x8f, 0xff, 0xff, 0xf0, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0x2f, 0xc0, 0xe0, 0x7f, 0xff, 0xfe, 0x02, 0xb0, 0x03, 0x07, 0xff, 
       0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x20, 0xc8, 0x80, 
       0x07, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf1, 
       0x98, 0x60, 0x07, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xf8, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
};

const lv_img_dsc_t balloon = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = balloon_map,
};

#ifndef LV_ATTRIBUTE_IMG_MOUNTAIN
#define LV_ATTRIBUTE_IMG_MOUNTAIN
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_MOUNTAIN uint8_t
    mountain_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xfb, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0xff, 0xff, 
        0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 
        0xff, 0xef, 0x7f, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xf0, 0xff, 0xff, 0x7f, 0xc1, 0xff, 0xde, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xf0, 0xff, 0xef, 0xbe, 0x00, 0x1f, 0xbe, 0x20, 0x00, 0x1c, 0x03, 0xff, 0xe0, 
        0x01, 0xf7, 0xff, 0xf8, 0x7f, 0xf0, 0xff, 0xe1, 0xd8, 0x00, 0x06, 0xf4, 0x20, 0x00, 0x0e, 0x00, 
        0xf8, 0x60, 0x01, 0xc0, 0xff, 0xe0, 0xff, 0xf0, 0xff, 0xfe, 0xe0, 0x00, 0x01, 0xe8, 0x20, 0x80, 
        0x1e, 0x00, 0x60, 0x10, 0x01, 0x80, 0x3f, 0x81, 0xff, 0xf0, 0xff, 0xff, 0x40, 0x00, 0x00, 0xd8, 
        0x01, 0x80, 0x0e, 0x00, 0x78, 0x30, 0x01, 0x00, 0x3f, 0x0f, 0xff, 0xf0, 0xff, 0xff, 0x80, 0x00, 
        0x00, 0x38, 0x01, 0x83, 0xce, 0x18, 0x38, 0x70, 0x79, 0x00, 0x1c, 0x1f, 0xff, 0xf0, 0xff, 0xff, 
        0x80, 0x3f, 0x00, 0x78, 0x00, 0x87, 0xfe, 0x1c, 0x3c, 0xf0, 0x7e, 0x00, 0x1c, 0x3f, 0xff, 0xf0, 
        0xff, 0xff, 0x00, 0xff, 0xc0, 0x38, 0x01, 0x87, 0xfe, 0x1c, 0x38, 0x30, 0xfe, 0x0c, 0x18, 0x7f, 
        0xff, 0xf0, 0xff, 0xfe, 0x03, 0xff, 0xf0, 0x18, 0x01, 0x87, 0xfe, 0x1c, 0x20, 0x10, 0xfe, 0x0c, 
        0x10, 0xff, 0xff, 0xf0, 0xff, 0xfe, 0x03, 0xff, 0xf8, 0x18, 0x01, 0x87, 0xfe, 0x1c, 0x60, 0x10, 
        0xfe, 0x0c, 0x10, 0xff, 0xff, 0xf0, 0xff, 0xfe, 0x06, 0x00, 0x18, 0x08, 0x01, 0x87, 0xfe, 0x1c, 
        0x00, 0x00, 0xfe, 0x0c, 0x01, 0xff, 0xff, 0xf0, 0xff, 0xfc, 0x0f, 0xff, 0xfc, 0x08, 0x01, 0x87, 
        0xfe, 0x1c, 0x08, 0x40, 0xfe, 0x0c, 0x01, 0xff, 0xff, 0xf0, 0xff, 0xfc, 0x01, 0xff, 0xe0, 0x08, 
        0x01, 0x87, 0x7e, 0x1c, 0x08, 0x40, 0xf6, 0x0f, 0xe1, 0x91, 0xff, 0xf0, 0xff, 0xfc, 0x3f, 0x00, 
        0x7f, 0x88, 0x01, 0x86, 0x7e, 0x1c, 0x40, 0x40, 0xc6, 0x0f, 0xe3, 0x90, 0xff, 0xf0, 0xff, 0xf9, 
        0xe7, 0xff, 0xfd, 0xf0, 0x01, 0x80, 0x7e, 0x1c, 0x20, 0x08, 0x06, 0x0f, 0xc0, 0x04, 0xff, 0xf0, 
        0xff, 0xf0, 0xff, 0xff, 0xfe, 0x80, 0x01, 0x80, 0x7e, 0x1c, 0x30, 0x10, 0x06, 0x0f, 0xe0, 0x00, 
        0xff, 0xf0, 0xff, 0xfc, 0x1c, 0x1e, 0x0e, 0x08, 0x01, 0x86, 0x7e, 0x1c, 0x20, 0x10, 0xe6, 0x0f, 
        0xe1, 0x8c, 0xff, 0xf0, 0xff, 0xfc, 0x1c, 0x1e, 0x0e, 0x08, 0x01, 0x87, 0x7e, 0x1c, 0x60, 0x18, 
        0xf6, 0x0f, 0xe1, 0x81, 0xff, 0xf0, 0xff, 0xfc, 0x08, 0x0c, 0x06, 0x08, 0x01, 0x87, 0xfe, 0x00, 
        0x70, 0x30, 0xfe, 0x0c, 0x01, 0xf8, 0xff, 0xf0, 0xff, 0xfc, 0x08, 0x0c, 0x04, 0x08, 0x01, 0x87, 
        0xfe, 0x00, 0x70, 0x30, 0xfe, 0x0c, 0x01, 0xeb, 0xff, 0xf0, 0xff, 0xfc, 0x0c, 0x1e, 0x0c, 0x08, 
        0x01, 0x87, 0xfe, 0x00, 0xf0, 0x30, 0xfe, 0x0c, 0x10, 0xeb, 0x7f, 0xf0, 0xff, 0xfe, 0x04, 0x1e, 
        0x08, 0x18, 0x01, 0x87, 0xfe, 0x07, 0xf0, 0x10, 0xfe, 0x0c, 0x10, 0xf5, 0x7f, 0xf0, 0xff, 0xfe, 
        0x03, 0xf3, 0xf0, 0x18, 0x01, 0x87, 0xfe, 0x1f, 0xf8, 0x70, 0xfe, 0x0c, 0x18, 0x75, 0x3f, 0xf0, 
        0xff, 0xff, 0x01, 0xf3, 0xe0, 0x38, 0x01, 0x87, 0xfe, 0x1f, 0xf8, 0x70, 0x7e, 0x0c, 0x18, 0x64, 
        0xff, 0xf0, 0xff, 0xff, 0x00, 0x7f, 0x80, 0x38, 0x01, 0x83, 0xce, 0x1f, 0xf8, 0x70, 0x7c, 0x00, 
        0x1c, 0x2f, 0xff, 0xf0, 0xff, 0xff, 0x80, 0x0c, 0x00, 0x30, 0x41, 0x80, 0x1e, 0x1f, 0xf8, 0x70, 
        0x00, 0x00, 0x3e, 0x1b, 0xff, 0xf0, 0xff, 0xfe, 0xc0, 0x37, 0x80, 0xd0, 0x40, 0x80, 0x1e, 0x1f, 
        0xf8, 0x70, 0x01, 0x00, 0x3f, 0x9b, 0xff, 0xf0, 0xff, 0xf6, 0xe0, 0xa4, 0x80, 0xe0, 0x20, 0x00, 
        0x0e, 0x0f, 0xf0, 0x70, 0x01, 0x80, 0x7f, 0x90, 0xff, 0xf0, 0xff, 0xef, 0xb3, 0x9d, 0x33, 0x70, 
        0x20, 0x00, 0x1c, 0x0c, 0xc7, 0x00, 0x01, 0xc0, 0xff, 0xb0, 0x7f, 0xf0, 0xff, 0xdf, 0xb5, 0x7f, 
        0x8d, 0xbe, 0xff, 0x73, 0xff, 0xfb, 0x3f, 0xff, 0x2b, 0xff, 0xff, 0x6b, 0xff, 0xf0, 0xff, 0xff, 
        0x0c, 0x7f, 0x86, 0x3e, 0x00, 0x1c, 0x00, 0x01, 0xc0, 0x00, 0x18, 0x00, 0x00, 0xc0, 0x3f, 0xf0, 
        0xff, 0xe7, 0x28, 0x1f, 0x01, 0x98, 0x00, 0x0b, 0x00, 0x00, 0x60, 0x00, 0x06, 0x00, 0x01, 0x80, 
        0x3f, 0xf0, 0xff, 0xfb, 0x30, 0x00, 0x00, 0xe8, 0x00, 0x03, 0x80, 0x00, 0x3c, 0x00, 0x23, 0x00, 
        0x03, 0x00, 0x7f, 0xf0, 0xff, 0xfc, 0x4f, 0xff, 0xff, 0x9f, 0x7f, 0xfc, 0xff, 0xff, 0xef, 0xbf, 
        0xfd, 0xcf, 0xef, 0x7f, 0xff, 0xf0, 0xff, 0xfc, 0xdf, 0xff, 0xff, 0xe4, 0xff, 0xff, 0x37, 0xff, 
        0xf3, 0x7f, 0xfe, 0x74, 0x3d, 0xff, 0xff, 0xf0, 0xff, 0xfe, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xef, 0xff, 0xfd, 0xff, 0xff, 0x9d, 0xf3, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0x8f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
};

const lv_img_dsc_t mountain = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 140,
    .header.h = 68,
    .data_size = 1232,
    .data = mountain_map,
};
