#pragma once

/* CHORDAL_HOLD is QMK's positional hold-tap: a mod-tap only resolves to its
 * hold when the next key is on the *opposite* hand. It is the counterpart of
 * ZMK's hold-trigger-key-positions, which this config's ZMK twin had wired
 * same-hand -- costing the positional shortcut, so cross-hand mods had to be
 * waited out at the full tapping term.
 */
#define CHORDAL_HOLD

#define TAPPING_TERM 200
#define QUICK_TAP_TERM 193
#define PERMISSIVE_HOLD
