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
#define ANALOG_JOYSTICK_SPEED_REGULATOR 10
// https://docs.qmk.fm/tap_hold

#define TAPPING_TERM 250
#define TAPPING_TERM_PER_KEY
//define WPM_ENABLE = yes

#define ENABLE_COMPILE_KEYCODE

#define LEADER_TIMEOUT 450
#define LEADER_PER_KEY_TIMING
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

#define ENABLE_RGB_MATRIX_ALPHAS_MODS         // Static dual hue speed is hue for secondary hue
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP      // How hot is your WPM!
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN    // Static gradient top to bottom speed controls how much gradient changes
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT    // Static gradient left to right speed controls how much gradient changes
#define ENABLE_RGB_MATRIX_BREATHING           // Single hue brightness cycling animation
#define ENABLE_RGB_MATRIX_CYCLE_ALL           // Full keyboard solid hue cycling through full gradient
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT    // Full gradient scrolling left to right
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN       // Full gradient scrolling top to bottom
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN        // Full gradient scrolling out to in
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL   // Full dual gradients scrolling out to in
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL      // Full gradient spinning pinwheel around center of keyboard
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL        // Full gradient spinning spiral around center of keyboard
#define ENABLE_RGB_MATRIX_DUAL_BEACON         // Full gradient spinning around center of keyboard
#define ENABLE_RGB_MATRIX_FLOWER_BLOOMING     // Full tighter gradient of first half scrolling left to right and second half scrolling right to left
#define ENABLE_RGB_MATRIX_RAINDROPS           // Randomly changes a single key's hue
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS // Randomly changes a single key's hue and saturation
#define ENABLE_RGB_MATRIX_HUE_BREATHING       // Hue shifts up a slight ammount at the same time then shifts back
#define ENABLE_RGB_MATRIX_HUE_PENDULUM        // Hue shifts up a slight ammount in a wave to the right then back to the left
#define ENABLE_RGB_MATRIX_HUE_WAVE            // Hue shifts up a slight ammount and then back down in a wave to the right
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL       // Single hue fractal filled keys pulsing horizontally out to edges
#define ENABLE_RGB_MATRIX_PIXEL_FLOW          // Pulsing RGB flow along LED wiring with random hues
#define ENABLE_RGB_MATRIX_PIXEL_RAIN          // Randomly light keys with random hues
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN        // That famous computer simulation
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE   // Pulses keys hit to hue & value then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE       // Hue & value pulse near a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS      // Hue & value pulse away on the same column and row of a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Hue & value pulse away on the same column and row of multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SPLASH              // Full gradient & value pulse away from a single key hit then fades value out
#define ENABLE_RGB_MATRIX_MULTISPLASH         // Full gradient & value pulse away from multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_RIVERFLOW
#define ENABLE_RGB_MATRIX_EFFECT_MAX

// #define MOUSEKEY_MAX_SPEED 12
// #define MOUSEKEY_MOVE_DELTA 10
#define MK_KINETIC_SPEED

