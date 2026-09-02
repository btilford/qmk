// Copyright 2024 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#include "quantum.h"
#include "lib/oled.h"

#ifdef OLED_ENABLE
oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;
    }
    return rotation;
}

bool oled_task_kb(void) {
    if (!oled_task_user()) {
        return false;
    }
    if (is_keyboard_master()) {
        render_layer_state();
    } else {
        oled_write_raw_P(bs_logo_img, sizeof(bs_logo_img));
    }
    return false;
}
#endif

//
// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//     for (uint8_t i = led_min; i < led_max; i++) {
//         switch(get_highest_layer(layer_state|default_layer_state)) {
//             case 7:
//                 // Numpad
//                 rgb_matrix_set_color(i, RGB_OFF);
//
//                 // Numbers
//                 rgb_matrix_set_color(g_led_config.matrix_co[0][2], RGB_BLUE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[0][3], RGB_BLUE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[0][4], RGB_BLUE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[1][2], RGB_BLUE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[1][3], RGB_BLUE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[1][4], RGB_BLUE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[2][2], RGB_BLUE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[2][3], RGB_BLUE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[2][4], RGB_BLUE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[2][5], RGB_BLUE);
//
//
//                 rgb_matrix_set_color(g_led_config.matrix_co[0][5], RGB_GREEN);
//                 rgb_matrix_set_color(g_led_config.matrix_co[1][5], RGB_GREEN);
//                 rgb_matrix_set_color(g_led_config.matrix_co[0][1], RGB_RED);
//                 rgb_matrix_set_color(g_led_config.matrix_co[0][1], RGB_RED);
//
//                 rgb_matrix_set_color(g_led_config.matrix_co[3][2], RGB_YELLOW);
//                 break;
//             case 6:
//                 // Text
//                 rgb_matrix_set_color(i, RGB_OFF);
//                 rgb_matrix_set_color(g_led_config.matrix_co[0][4], RGB_CHARTREUSE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[1][0], RGB_RED);
//                 rgb_matrix_set_color(g_led_config.matrix_co[1][2], RGB_YELLOW);
//                 rgb_matrix_set_color(g_led_config.matrix_co[1][4], RGB_ORANGE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[2][1], RGB_RED);
//                 rgb_matrix_set_color(g_led_config.matrix_co[2][2], RGB_YELLOW);
//                 rgb_matrix_set_color(g_led_config.matrix_co[2][3], RGB_YELLOW);
//                 rgb_matrix_set_color(g_led_config.matrix_co[2][4], RGB_GREEN);
//
//                 rgb_matrix_set_color(g_led_config.matrix_co[6][4], RGB_ORANGE);
//                 break;
//            case 5:
//                 // Media
//                 rgb_matrix_set_color(i, RGB_OFF);
//
//                 // Music
//                 rgb_matrix_set_color(g_led_config.matrix_co[1][4], RGB_GREEN);
//                 rgb_matrix_set_color(g_led_config.matrix_co[1][2], RGB_RED);
//                 rgb_matrix_set_color(g_led_config.matrix_co[4][1], RGB_YELLOW);
//                 rgb_matrix_set_color(g_led_config.matrix_co[6][5], RGB_YELLOW);
//
//
//                 // Volume
//                 // rgb_matrix_set_color(g_led_config.matrix_co[0][5], RGB_GREEN);
//                 // rgb_matrix_set_color(g_led_config.matrix_co[1][5], RGB_TURQUOISE);
//                 // rgb_matrix_set_color(g_led_config.matrix_co[2][5], RGB_RED);
//
//
//                 // Exec
//                 // rgb_matrix_set_color(g_led_config.matrix_co[0][4], RGB_ORANGE);
//                 // rgb_matrix_set_color(g_led_config.matrix_co[2][2], RGB_ORANGE);
//
//
//                 // Screen
//                 rgb_matrix_set_color(g_led_config.matrix_co[4][5], RGB_GREEN);
//                 rgb_matrix_set_color(g_led_config.matrix_co[5][5], RGB_TURQUOISE);
//
//
//                 break;
//             case 4:
//                 // Mouse
//                 rgb_matrix_set_color(i, RGB_OFF);
//
//                 // Mouse Accelleration
//                 // rgb_matrix_set_color(g_led_config.matrix_co[0][0], RGB_GREEN);
//                 // rgb_matrix_set_color(g_led_config.matrix_co[0][1], RGB_GREEN);
//                 // rgb_matrix_set_color(g_led_config.matrix_co[0][2], RGB_GREEN);
//
//                 // Mouse Movement
//                 rgb_matrix_set_color(g_led_config.matrix_co[0][3], RGB_PURPLE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[1][2], RGB_PURPLE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[1][3], RGB_PURPLE);
//                 rgb_matrix_set_color(g_led_config.matrix_co[1][4], RGB_PURPLE);
//
//                 // Mouse Buttons 1-3
//                 // rgb_matrix_set_color(g_led_config.matrix_co[7][0], RGB_PURPLE);
//                 // rgb_matrix_set_color(g_led_config.matrix_co[7][1], RGB_PURPLE);
//                 // rgb_matrix_set_color(g_led_config.matrix_co[7][2], RGB_PURPLE);
//
//
//                 // Mouse Scroll
//                 // rgb_matrix_set_color(g_led_config.matrix_co[5][5], RGB_PURPLE);
//                 // rgb_matrix_set_color(g_led_config.matrix_co[5][4], RGB_PURPLE);
//                 // rgb_matrix_set_color(g_led_config.matrix_co[5][3], RGB_PURPLE);
//                 // rgb_matrix_set_color(g_led_config.matrix_co[5][2], RGB_PURPLE);
//                 break;
//             case 3:
//                 // Motions
//                 rgb_matrix_set_color(i, RGB_OFF);
//                 // rgb_matrix_set_color(g_led_config.matrix_co[4][0], RGB_RED);
//
//                 for(uint8_t col = 2; col < MATRIX_COLS; ++col) {
//                     rgb_matrix_set_color(g_led_config.matrix_co[5][col], RGB_YELLOW);
//                 }
//                 // rgb_matrix_set_color(g_led_config.matrix_co[4][1], RGB_AZURE);
//                 break;
//             case 2:
//                 // Admin
//                 rgb_matrix_set_color(i, RGB_RED);
//                 break;
//             case 1:
//                 // Symbols And Number Row
//                 rgb_matrix_set_color(i, RGB_OFF);
//                 for(uint8_t col = 1; col < MATRIX_COLS; ++col) {
//                     rgb_matrix_set_color(g_led_config.matrix_co[0][col], RGB_BLUE);
//                 }
//                 for(uint8_t col = 1; col < MATRIX_COLS; ++col) {
//                     rgb_matrix_set_color(g_led_config.matrix_co[4][col], RGB_BLUE);
//                 }
//                 rgb_matrix_set_color(g_led_config.matrix_co[4][0], RGB_GOLD);
//
//
//                 // rgb_matrix_set_color(g_led_config.matrix_co[0][MATRIX_COLS-1], RGB_GOLD);
//                 for(uint8_t col = 0; col < MATRIX_COLS; ++col) {
//                     rgb_matrix_set_color(g_led_config.matrix_co[1][col], RGB_GOLD);
//                 }
//                 for(uint8_t col = 1; col < MATRIX_COLS; ++col) {
//                     rgb_matrix_set_color(g_led_config.matrix_co[1][col], RGB_GOLD);
//                     rgb_matrix_set_color(g_led_config.matrix_co[5][col], RGB_GOLD);
//                 }
//
//
//                 for(uint8_t col = 4; col < MATRIX_COLS; ++col) {
//                     rgb_matrix_set_color(g_led_config.matrix_co[2][col], RGB_GOLD);
//                     rgb_matrix_set_color(g_led_config.matrix_co[6][col], RGB_GOLD);
//                 }
//
//                 break;
//             default:
//                // rgb_matrix_set_color(i, RGB_OFF);
//                // rgb_matrix_set_color(g_led_config.matrix_co[1][0], RGB_RED);
//                // rgb_matrix_set_color(g_led_config.matrix_co[4][0], RGB_RED);
//                //
//                //
//                //
//                // // Left Homerow
//                // rgb_matrix_set_color(g_led_config.matrix_co[1][1], RGB_ORANGE);
//                // rgb_matrix_set_color(g_led_config.matrix_co[1][2], RGB_ORANGE);
//                // rgb_matrix_set_color(g_led_config.matrix_co[1][3], RGB_ORANGE);
//                // rgb_matrix_set_color(g_led_config.matrix_co[1][4], RGB_ORANGE);
//                //
//                //
//                // rgb_matrix_set_color(g_led_config.matrix_co[5][1], RGB_ORANGE);
//                // rgb_matrix_set_color(g_led_config.matrix_co[5][2], RGB_ORANGE);
//                // rgb_matrix_set_color(g_led_config.matrix_co[5][3], RGB_ORANGE);
//                // rgb_matrix_set_color(g_led_config.matrix_co[5][4], RGB_ORANGE);
//                //
//                //
//                // // Thumbs
//                // rgb_matrix_set_color(g_led_config.matrix_co[3][0], RGB_ORANGE);
//                // rgb_matrix_set_color(g_led_config.matrix_co[3][1], RGB_ORANGE);
//                // rgb_matrix_set_color(g_led_config.matrix_co[3][2], RGB_ORANGE);
//                // rgb_matrix_set_color(g_led_config.matrix_co[7][0], RGB_ORANGE);
//                // rgb_matrix_set_color(g_led_config.matrix_co[7][1], RGB_ORANGE);
//                // rgb_matrix_set_color(g_led_config.matrix_co[7][2], RGB_ORANGE);
//                //
//                break;
//         }
//     }
//     return false;
// }

