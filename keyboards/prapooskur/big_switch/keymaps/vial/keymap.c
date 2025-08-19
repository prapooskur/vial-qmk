#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │               │
     * ├               ┤
     * │               │
     * ├       1       ┤
     * │               │
     * ├               ┤
     * │               │
     * └───┴───┴───┴───┘
     *     2       3
     */
    [0] = LAYOUT_bigswitch(
        LALT(KC_F4), KC_MUTE, QK_BOOT
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),  ENCODER_CCW_CW(KC_MPRV, KC_MNXT)  },
};
#endif