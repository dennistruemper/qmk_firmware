#include QMK_KEYBOARD_H
#include "action_layer.h"
#include "keymap_extras/keymap_german.h"

#define UM 0

#define L0   0      // layer_0
#define L1   1      // layer_1  
#define L2   2      // layer_2
#define L3   3      // layer_3
#define L4   4      // layer_4
#define L5   5      // layer_5
#define L6   6      // layer_6
#define L7   7      // layer_7





const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
    .------------------------------------.------------------------------------.
    |ESC  | F1 | F2 | F3 | F4 | F5 | F6  | F7  | F8 | F9 | F10| F11| F12|PAUSE|
    !-----+----+----+----+----+----------!-----+----+----+----+----+----+-----!
    |TAB  | X  | V  | L  | C  | W  |Print| INS | K  | H  | G  | F  | Q  | ß   |
    !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
    |ESC  | U  | I  | A  | E  | O  |-----!-----! S  | N  | R  | T  | D  | Y   |
    !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
    |LSFT |Ü   | Ö  | Ä  | P  | Z  |TG(7)|TG(4)| B  | M  | ,  | .  | J  |RSFT |
    '-----+----+----+----+----+----------'----------+----+----+----+----+-----'
     |[1] |LGUI|LALT|MO(3)|MO(2)|                   !TAB |MO(3)|APP|RALT|RCTL|
     '------------------------'                     '------------------------'
                            .-----------. .-----------.
                            |VOL- |VOL+ | !MUTE |PLAY |
                      .-----+-----+-----! !-----+-----+-----.
                      !     !     |     | !     |     !     !
                      !     !     |-----| !-----|     !     !
                      !     !     !     ! !     !     !     !
                      |ENTER| ESC |     | ! CTL |MO(1)|SPACE|
                      '-----------------' '-----------------'
    [1] Ctrl + alt + del
 */
[L0] = LAYOUT_ergodox(
 KC_ESC,  KC_F1,   KC_F2,    KC_F3,   KC_F4,    KC_F5,   KC_F6,
 KC_TAB,  DE_X,    DE_V,     DE_L,    DE_C,     DE_W,    KC_PSCR,
 ALGR_T(KC_ESC),   GUI_T(DE_U),    SFT_T(DE_I),     CTL_T(DE_A),    ALT_T(DE_E),     LT(1,DE_O),
 KC_LSFT, DE_UE,   DE_OE,    DE_AE,   DE_P,     DE_Z,    TG(7),
 LCTL(LALT(KC_DEL)), KC_LGUI, KC_LALT,  MO(3),   MO(2),
 /*-*/    /*-*/    /*-*/     /*-*/    /*-*/     KC_VOLD, KC_VOLU,
 /*-*/    /*-*/    /*-*/     /*-*/    /*-*/     /*-*/    KC_TRNS,
 /*-*/    /*-*/    /*-*/     /*-*/    KC_ENTER, LT(5,KC_ESC), KC_TRNS,
 KC_F7,  KC_F8,    KC_F9,    KC_F10,  KC_F11,   KC_F12,  KC_PAUSE,
 KC_INS, DE_K,    DE_H,     DE_G,    DE_F,     DE_Q,    DE_SS,
 /*-*/    LT(1,DE_S),    ALT_T(DE_N),     CTL_T(DE_R),    SFT_T(DE_T),     GUI_T(DE_D),    ALGR_T(DE_Y),
 TG(4),  DE_B,    DE_M,     DE_COMM, DE_DOT,   DE_J,    KC_RSFT,
 /*-*/    /*-*/   KC_TAB,    MO(3),   KC_APP,   KC_RALT, KC_RCTL,
 KC_MUTE, KC_MPLY,
 KC_TRNS,
 KC_RCTL, MO(1) ,  KC_SPACE
),
/*
    .------------------------------------.------------------------------------.
    |     |    |    |    |    |    |     |     |    |    |    |    |    |     |
    !-----+----+----+----+----+----------!-----+----+----+----+----+----+-----!
    |     | €  | _  | [  | ]  | ^  |     |  ´  | !  | <  | >  | =  | &  |     |
    !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
    |     | \  | /  |  { | }  | *  |-----!-----! ?  | (  | )  | -  | :  | @   |
    !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
    |     | #  | $  | |  | ~  |    |     |  `  | +  | %  | "  | '  | ;  |     |
    '-----+----+----+----+----+----------'----------+----+----+----+----+-----'
     |    |    |    |    |    |                     !    |    |    |    |    |
     '------------------------'                     '------------------------'
                            .-----------. .-----------.
                            |     |     | !     |     |
                      .-----+-----+-----! !-----+-----+-----.
                      !     !     |     | !     |     !     !
                      !     !     !-----! !-----!     !     !
                      |     |     |     | !     |     |     |
                      '-----------------' '-----------------'
 */
[L1] = LAYOUT_ergodox(
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, DE_EURO, DE_UNDS, DE_LBRC, DE_RBRC, DE_CIRC, KC_TRNS,
 KC_TRNS, DE_BSLS, KC_PSLS, DE_LCBR, DE_RCBR, DE_ASTR,
 KC_TRNS, DE_HASH, DE_DLR,  DE_PIPE, DE_TILD, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 DE_ACUT, DE_EXLM, DE_LESS, DE_MORE, DE_EQL,  DE_AMPR, KC_TRNS,
 /*-*/    DE_QST,  DE_LPRN, DE_RPRN, DE_MINS, DE_COLN, DE_AT,
 DE_GRV, DE_PLUS, DE_PERC, DE_DQOT, DE_QUOT, DE_SCLN, KC_TRNS,
 /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS,
 KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS
),
/*
 * .------------------------------------.------------------------------------.
 * |     |    |    |    |    |    |     |     |    |    |    |    |    |     |
 * !-----+----+----+----+----+----------!-----+----+----+----+----+----+-----!
 * |     |PGUP|BSPC| UP |DEL |PGDN|     |     |    |  7 |  8 |  9 |    |     |
 * !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
 * |     |HOME|LEFT|DOWN|RGHT|END |-----!-----!    |  4 |  5 |  6 |    |     |
 * !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
 * |     |    |    |PREV|NEXT|    |     |     |    |  1 |  2 |  3 |    |     |
 * '-----+----+----+----+----+----------'----------+----+----+----+----+-----'
 *  |    |    |    |    |    |                     !    |    |    |    |    |
 *  '------------------------'                     '------------------------'
 *                         .-----------. .-----------.
 *                         |     |     | !     |     |
 *                   .-----+-----+-----! !-----+-----+-----.
 *                   !     !     |     | !     |     !     !
 *                   !     !     !-----! !-----!     !     !
 *                   |     |     |     | !     |     |  0  |
 *                   '-----------------' '-----------------'
 */
[L2] = LAYOUT_ergodox(
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN, KC_TRNS,
 KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, DE_7,    DE_8,    DE_9,    KC_TRNS, KC_TRNS,
 /*-*/    KC_TRNS, DE_4,    DE_5,    DE_6,    KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, DE_1,    DE_2,    DE_3,    KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS,
 KC_TRNS,
 KC_TRNS, KC_TRNS, DE_0
),
/*
 * intellij
 * .------------------------------------.------------------------------------.
 * |     |    |    |    |    |    |     |     |    |    |    |    |    |     |
 * !-----+----+----+----+----+----------!-----+----+----+----+----+----+-----!
 * |     |STOP|DEBG|RUN |    |    |     |     |    |    |    |    |    |     |
 * !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
 * |ExPoi|S_ov|S_in|S_fi|S_ou|Resu|-----!-----!    |    |    |    |    |     |
 * !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
 * |     |    |    |    |    |    |     |     |    |    |    |    |    |     |
 * '-----+----+----+----+----+----------'----------+----+----+----+----+-----'
 *  |    |    |    |    |    |                     !    |    |    |    |    |
 *  '------------------------'                     '------------------------'
 *                         .-----------. .-----------.
 *                         |     |     | !     |     |
 *                   .-----+-----+-----! !-----+-----+-----.
 *                   !     !     |     | !     |     !     !
 *                   !     !     !-----! !-----!     !     !
 *                   |     |     |     | !     |     |     |
 *                   '-----------------' '-----------------'
 * 
 * STOP DEBG RUN start config
 * ExPoi go to execution pointer
 * S_ov Step over
 * S_in Step in
 * S_fi Step force in
 * S_ou Step out
 * Resu resume execution
 * 
 */
[L3] = LAYOUT_ergodox(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, LCTL(DE_2), LSFT(KC_F9), LSFT(KC_F10), KC_TRNS, KC_TRNS, 
    LALT(LSFT(DE_0)), KC_F8, KC_F7, LALT(LSFT(KC_F7)), LSFT(KC_F8), KC_F9,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS,
    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS,
    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,
    KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS
   ),
/*
 * .------------------------------------.------------------------------------.
 * |     |    |    |    |    |    |     |     |    |    |    |    |    |     |
 * !-----+----+----+----+----+----------!-----+----+----+----+----+----+-----!
 * |     |M_WU|    |M_CU|    |M_WD|     |     |    |    |    |    |    |     |
 * !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
 * |     |    |M_CL|M_CD|M_CR|    |-----!-----!    |M_A2|M_A1|M_A0|M_B5|     |
 * !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
 * |     |    |    |    |    |    |     |     |    |    |    |    |    |     |
 * '-----+----+----+----+----+----------'----------+----+----+----+----+-----'
 *  |    |    |    |    |    |                     !    |    |    |    |    |
 *  '------------------------'                     '------------------------'
 *                         .-----------. .-----------.
 *                         |     |     | !     |     |
 *                   .-----+-----+-----! !-----+-----+-----.
 *                   !     !     |     | !     |     !     !
 *                   !     !     !-----! !-----!     !     !
 *                   | Left|Back |     | !     |Midle|Right|
 *                   '-----------------' '-----------------'
 */
[L4] = LAYOUT_ergodox(
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_WH_U, KC_TRNS, KC_MS_U, KC_TRNS, KC_WH_D, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    KC_BTN1, KC_BTN4, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 /*-*/    KC_TRNS, KC_ACL2, KC_ACL1, KC_ACL0, KC_BTN5, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS,
 KC_TRNS,
 KC_TRNS, KC_BTN3, KC_BTN2
),
/*
 * .------------------------------------.------------------------------------.
 * |     |    |    |    |    |    |     |     |    |    |    |    |    |RESET|
 * !-----+----+----+----+----+----------!-----+----+----+----+----+----+-----!
 * |     |    |    |    |    |    |     |     |    |  F7|  F8|  F9| F12|     |
 * !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
 * |     |    |    |    |    |    |-----!-----!    |  F4|  F5|  F6| F11|     |
 * !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
 * |     |    |    |    |    |    |     |     |    |  F1|  F2|  F3| F10|     |
 * '-----+----+----+----+----+----------'----------+----+----+----+----+-----'
 *  |    |    |    |    |    |                     !    |    |    |    |    |
 *  '------------------------'                     '------------------------'
 *                         .-----------. .-----------.
 *                         |     |     | !     |     |
 *                   .-----+-----+-----! !-----+-----+-----.
 *                   !     !     |     | !     |     !     !
 *                   !     !     !-----! !-----!     !     !
 *                   |     |     |     | !     |     |     |
 *                   '-----------------' '-----------------'
 */
[L5] = LAYOUT_ergodox(
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
 KC_TRNS, KC_TRNS, KC_F7,   KC_F8,   KC_F9,   KC_F12,  KC_TRNS,
 /*-*/    KC_TRNS, KC_F4,   KC_F5,   KC_F6,   KC_F11,  KC_TRNS,
 KC_TRNS, KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F10,  KC_TRNS,
 /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS,
 KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS
),
/*
 * .------------------------------------.------------------------------------.
 * |     |    |    |    |    |    |     |     |    |    |    |    |    |     |
 * !-----+----+----+----+----+----------!-----+----+----+----+----+----+-----!
 * |     |    |    |    |    |    |     |     |    |    |    |    |    |     |
 * !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
 * |     |    |    |    |    |    |-----!-----!    |    |    |    |    |     |
 * !-----+----+----+----x----x----!     !     !----x----x----+----+----+-----!
 * |     |    |    |    |    |    |     |     |    |    |    |    |    |     |
 * '-----+----+----+----+----+----------'----------+----+----+----+----+-----'
 *  |    |    |    |    |    |                     !    |    |    |    |    |
 *  '------------------------'                     '------------------------'
 *                         .-----------. .-----------.
 *                         |     |     | !     |     |
 *                   .-----+-----+-----! !-----+-----+-----.
 *                   !     !     |     | !     |     !     !
 *                   !     !     !-----! !-----!     !     !
 *                   |     |     |     | !     |     |     |
 *                   '-----------------' '-----------------'
 */
[L6] = LAYOUT_ergodox(
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS,
 /*-*/    /*-*/    /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 /*-*/    /*-*/    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
 KC_TRNS, KC_TRNS,
 KC_TRNS,
 KC_TRNS, KC_TRNS, KC_TRNS
),

/* Keymap 1: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  | LEFT |           | RIGHT|   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Del    |   Q  |   W  |   E  |   R  |   T  |  L1  |           |  L1  |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | BkSp   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |; / L2|' / Cmd |
 * |--------+------+------+------+------+------| Hyper|           | Meh  |------+------+------+------+------+--------|
 * | LShift |Z/Ctrl|   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |//Ctrl| RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |Grv/L1|  '"  |AltShf| Left | Right|                                       |  Up  | Down |   [  |   ]  | ~L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | App  | LGui |       | Alt  |Ctrl/Esc|
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 | Space|Backsp|------|       |------|  Tab   |Enter |
 *                                 |      |ace   | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[L7] = LAYOUT_ergodox(  
        // left hand
        KC_EQL,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   KC_LEFT,
        KC_DELT,        KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   KC_TRNS,
        KC_BSPC,        KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
        KC_LSFT,        CTL_T(KC_Z),  KC_X,   KC_C,   KC_V,   KC_B,   KC_TRNS,
        KC_GRV,         KC_QUOT,      LALT(KC_LSFT),  KC_LEFT,KC_RGHT,
                                              ALT_T(KC_APP),  KC_LGUI,
                                                              KC_HOME,
                                               KC_SPC,KC_BSPC,KC_END,
        // right hand
             KC_RGHT,     KC_6,   KC_7,  KC_8,   KC_9,   KC_0,             KC_MINS,
             KC_TRNS,    KC_Y,   KC_U,  KC_I,   KC_O,   KC_P,             KC_BSLS,
                          KC_H,   KC_J,  KC_K,   KC_L,   KC_SCLN   ,GUI_T(KC_QUOT),
             MEH_T(KC_NO),KC_N,   KC_M,  KC_COMM,KC_DOT, CTL_T(KC_SLSH),   KC_RSFT,
                                  KC_UP, KC_DOWN,KC_LBRC,KC_RBRC,          KC_FN1,
             KC_LALT,        CTL_T(KC_ESC),
             KC_PGUP,
             KC_PGDN,KC_TAB, KC_ENT
    ),
};

const uint16_t PROGMEM fn_actions[] = {};

#define UC_MODE_WIN 0
#define UC_MODE_LINUX 1
#define UC_MODE_OSX 2

// TODO: allow default mode to be configured
static uint16_t unicode_mode = UC_MODE_WIN;

uint16_t hextokeycode(uint8_t hex) {
    if (hex == 0x0) {
        return KC_P0;
    }
    if (hex < 0xA) {
        return KC_P1 + (hex - 0x1);
    }
    return KC_A + (hex - 0xA);
}

void unicode_action_function(uint16_t hi, uint16_t lo) {
    switch (unicode_mode) {
    case UC_MODE_WIN:
        register_code(KC_LALT);

        register_code(KC_PPLS);
        unregister_code(KC_PPLS);

        register_code(hextokeycode((hi & 0xF0) >> 4));
        unregister_code(hextokeycode((hi & 0xF0) >> 4));
        register_code(hextokeycode((hi & 0x0F)));
        unregister_code(hextokeycode((hi & 0x0F)));
        register_code(hextokeycode((lo & 0xF0) >> 4));
        unregister_code(hextokeycode((lo & 0xF0) >> 4));
        register_code(hextokeycode((lo & 0x0F)));
        unregister_code(hextokeycode((lo & 0x0F)));

        unregister_code(KC_LALT);
        break;
    case UC_MODE_LINUX:
        register_code(KC_LCTL);
        register_code(KC_LSFT);

        register_code(KC_U);
        unregister_code(KC_U);

        register_code(hextokeycode((hi & 0xF0) >> 4));
        unregister_code(hextokeycode((hi & 0xF0) >> 4));
        register_code(hextokeycode((hi & 0x0F)));
        unregister_code(hextokeycode((hi & 0x0F)));
        register_code(hextokeycode((lo & 0xF0) >> 4));
        unregister_code(hextokeycode((lo & 0xF0) >> 4));
        register_code(hextokeycode((lo & 0x0F)));
        unregister_code(hextokeycode((lo & 0x0F)));

        unregister_code(KC_LCTL);
        unregister_code(KC_LSFT);
        break;
    case UC_MODE_OSX:
        break;
    }
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (!record->event.pressed) {
        return MACRO_NONE;
    }
    // MACRODOWN only works in this function
    switch(id) {
        case UM:
            unicode_mode = (unicode_mode + 1) % 2;
            break;


        default:
            break;
    }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case L1:
            ergodox_right_led_1_on();
            break;
        case L2:
            ergodox_right_led_2_on();
            break;
        case L3:
            ergodox_right_led_3_on();
            break;
        case L4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        case L5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            break;
        // case L6:
        //     ergodox_right_led_2_on();
        //     ergodox_right_led_3_on();
        //     break;
         case L7:
             ergodox_right_led_1_on();
             ergodox_right_led_2_on();
             ergodox_right_led_3_on();
             break;
        default:
            ergodox_board_led_off();
            break;
    }
};
