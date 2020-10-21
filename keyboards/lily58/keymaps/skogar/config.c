#include "config.h"

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RCTL_T(KC_BSPC):
        case LCTL_T(KC_DEL):
        case RCTL_T(KC_K):
	case RSFT_T(KC_J):
	case RALT_T(KC_L):
            return false;
        default:
            return true;
    }
}
