# Board-level only. Everything a keymap chooses for itself — leader, tap dance,
# caps word, key overrides, unicode map, space cadet, WPM, OS detection — moved
# to users/btilford/rules.mk in the qmk-config userspace repo, so this board can
# still be built with the stock keymap.
POINTING_DEVICE_DRIVER = analog_joystick

SRC += lib/oled.c
