#pragma once

/* Shared row chunks.
 *
 * QMK community layouts only work between boards with an identical LAYOUT
 * macro, so they cover the 3x6+3 boards and nothing else. These chunks are the
 * mechanism that does span different key counts: each board composes them into
 * its own LAYOUT call and spells out only the keys it has in addition. A board
 * with extra inner columns, or a 4x6, reuses every row below unchanged.
 *
 * This is the QMK counterpart of config/base.keymap in the zmk-config repo;
 * keep the two in step.
 */

// ── Base ──────────────────────────────────────────────────────────────────
#define ___BASE_L1___  KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T
#define ___BASE_R1___  KC_Y, KC_U, KC_I, KC_O, KC_P, LT(KB_SETTINGS, KC_BSPC)

// Home-row mods, minus Shift: Shift lives on the thumbs now, because on the
// home row the hold competed with the alpha roll and dropped single-character
// shifts at speed. Alt sits on D/K rather than G/H so the index finger isn't
// doing both the MOTION layer-tap and Alt.
#define ___BASE_L2___  QK_GESC, LGUI_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LT(MOTION, KC_F), KC_G
#define ___BASE_R2___  KC_H, LT(TEXT, KC_J), RALT_T(KC_K), RCTL_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT

#define ___BASE_L3___  MO(NUM_PAD), KC_Z, KC_X, KC_C, KC_V, KC_B
// ZMK has &swapper (tri-state alt-tab) in this slot. QMK has no built-in
// equivalent, so KC_APP holds the position until one is written.
#define ___BASE_R3___  LT(NUM_PAD, KC_N), LT(MEDIA, KC_M), KC_COMM, KC_DOT, KC_SLSH, KC_APP

// ── Symbols + function row ────────────────────────────────────────────────
// F1-F12 take the whole top row. The digits they displace are still on
// NUM_PAD, and this puts the F-keys behind a thumb hold rather than anything
// deeper -- BIOS keys have to be reachable with no OS running.
#define ___SYMB_L1___  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6
#define ___SYMB_R1___  KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12

#define ___SYMB_L2___  _______, LGUI_T(KC_EXLM), LCTL_T(KC_AT), KC_HASH, KC_DLR, LALT_T(KC_PERC)
#define ___SYMB_R2___  RALT_T(KC_CIRC), KC_AMPR, KC_ASTR, RCTL_T(KC_LPRN), RGUI_T(KC_RPRN), KC_BSLS

#define ___SYMB_L3___  _______, _______, KC_LBRC, KC_GRV, KC_MINS, KC_LCBR
#define ___SYMB_R3___  KC_RCBR, KC_EQL, _______, KC_RBRC, _______, _______

// ── Thumbs (3+3 boards) ───────────────────────────────────────────────────
// Outer thumbs are Shift; the middle pair is space/enter, which are the two
// that actually get used.
// Order is outer -> inner on the left, inner -> outer on the right, matching
// how LAYOUT_split_3x6_3 lists them. Space and enter move to the middle pair
// to match ZMK. QK_LEAD takes the inner-right slot as ZMK's &ldr does -- the
// leader is already implemented in keymap.c but was bound to no key at all.
#define ___BASE_THUMB_L___  KC_LSFT, LT(MOUSE, KC_SPC), TD(TD_RET_BASE)
#define ___BASE_THUMB_R___  QK_LEAD, LT(SYMB, KC_ENT), KC_RSFT
