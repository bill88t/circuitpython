// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2023 Bill Sideris, independently providing these changes.
//
// SPDX-License-Identifier: MIT

#pragma once

#define MICROPY_HW_BOARD_NAME       "Beryllium MODMCU-ESP32-S3 (N16R8)"
#define MICROPY_HW_MCU_NAME         "ESP32S3"

#define MICROPY_HW_LED_STATUS (&pin_GPIO1)

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO11) // MODMCU standard pins
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO12)

#define DEFAULT_UART_BUS_RX (&pin_GPIO44)
#define DEFAULT_UART_BUS_TX (&pin_GPIO43)
