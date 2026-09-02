// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP22
#define I2C1_SCL_PIN GP23

#define AUDIO_PIN GP28
#define AUDIO_PWM_DRIVER PWMD6
#define AUDIO_INIT_DELAY
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
// #define STARTUP_SONG SONG(ODE_TO_JOY)
// #define JOYSTICK_ENABLE yes
// #define JOYSTICK_DRIVER digital
// #define USB_POLLING_INTERVAL_MS 1
// #define QMK_KEYS_PER_SCAN 12
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define ANALOG_JOYSTICK_Y_AXIS_PIN GP27
#define ANALOG_JOYSTICK_X_AXIS_PIN GP26
#define POINTING_DEVICE_INVERT_Y
// #define POINTING_DEVICE_INVERT_X
#define ANALOG_JOYSTICK_SPEED_REGULATOR 21
// https://docs.qmk.fm/tap_hold

//define WPM_ENABLE = yes



#define SPLIT_MODS_ENABLE
// #define SPLIT_LAYER_STATE_ENABLE

// #define MOUSEKEY_MAX_SPEED 12
// #define MOUSEKEY_MOVE_DELTA 10

/* Keymap-level settings — tapping terms, leader, caps word, and the RGB effect
 * list — moved to the qmk-config userspace repo (users/btilford/config.h and
 * this board's keymaps/btilford/config.h). What remains here is hardware. */
