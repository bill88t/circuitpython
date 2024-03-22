#include "py/objtuple.h"
#include "shared-bindings/board/__init__.h"
#include "shared-module/displayio/__init__.h"

STATIC const mp_rom_obj_tuple_t camera_data_tuple = {
    // The order matters.
    // They must be ordered from low to high (Y2, Y3 .. Y9).

    // Do not include any of the control pins in here.
    {&mp_type_tuple},
    8,
    {
        MP_ROM_PTR(&pin_GPIO5), // Y2
        MP_ROM_PTR(&pin_GPIO18), // Y3
        MP_ROM_PTR(&pin_GPIO19), // Y4
        MP_ROM_PTR(&pin_GPIO21),  // Y5
        MP_ROM_PTR(&pin_GPIO36), // Y6
        MP_ROM_PTR(&pin_GPIO39), // Y7
        MP_ROM_PTR(&pin_GPIO34), // Y8
        MP_ROM_PTR(&pin_GPIO35)  // Y9
    }
};

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_BOOT), MP_ROM_PTR(&pin_GPIO0) },
    { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_GPIO33) },

    { MP_ROM_QSTR(MP_QSTR_FLASH), MP_ROM_PTR(&pin_GPIO4) },

    { MP_ROM_QSTR(MP_QSTR_CAM_PWDN), MP_ROM_PTR(&pin_GPIO32) },
    { MP_ROM_QSTR(MP_QSTR_CAM_XCLK), MP_ROM_PTR(&pin_GPIO0) },
    { MP_ROM_QSTR(MP_QSTR_CAM_SIOD), MP_ROM_PTR(&pin_GPIO26) },
    { MP_ROM_QSTR(MP_QSTR_CAM_SIOC), MP_ROM_PTR(&pin_GPIO27) },

    { MP_ROM_QSTR(MP_QSTR_CAM_DATA), MP_ROM_PTR(&camera_data_tuple) },

    { MP_ROM_QSTR(MP_QSTR_CAM_D9), MP_ROM_PTR(&pin_GPIO19) },
    { MP_ROM_QSTR(MP_QSTR_CAM_D8), MP_ROM_PTR(&pin_GPIO36) },
    { MP_ROM_QSTR(MP_QSTR_CAM_D7), MP_ROM_PTR(&pin_GPIO18) },
    { MP_ROM_QSTR(MP_QSTR_CAM_D6), MP_ROM_PTR(&pin_GPIO39) },
    { MP_ROM_QSTR(MP_QSTR_CAM_D5), MP_ROM_PTR(&pin_GPIO5) },
    { MP_ROM_QSTR(MP_QSTR_CAM_D4), MP_ROM_PTR(&pin_GPIO34) },
    { MP_ROM_QSTR(MP_QSTR_CAM_D3), MP_ROM_PTR(&pin_GPIO35) },
    { MP_ROM_QSTR(MP_QSTR_CAM_D2), MP_ROM_PTR(&pin_GPIO32) }
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
