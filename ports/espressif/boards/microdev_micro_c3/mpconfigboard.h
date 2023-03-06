/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2021 microDev
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

// Board setup
#define MICROPY_HW_BOARD_NAME           "MicroDev microC3"
#define MICROPY_HW_MCU_NAME             "ESP32-C3FN4"

// Status LEDs
#define MICROPY_HW_NEOPIXEL             (&pin_GPIO7)
#define MICROPY_HW_NEOPIXEL_COUNT       (2)

#define MICROPY_HW_LED_STATUS           (&pin_GPIO8)

// Default bus pins
#define DEFAULT_I2C_BUS_SCL             (&pin_GPIO4)
#define DEFAULT_I2C_BUS_SDA             (&pin_GPIO5)

#define DEFAULT_SPI_BUS_SCK             (&pin_GPIO1)
#define DEFAULT_SPI_BUS_MOSI            (&pin_GPIO2)
#define DEFAULT_SPI_BUS_MISO            (&pin_GPIO3)

#define DEFAULT_UART_BUS_RX             (&pin_GPIO20)
#define DEFAULT_UART_BUS_TX             (&pin_GPIO21)

// For REPL over built-in USB Serial
#define CIRCUITPY_ESP_USB_SERIAL_JTAG   (1)

// For entering safe mode
#define CIRCUITPY_BOOT_BUTTON           (&pin_GPIO9)

#define CIRCUITPY_SETTABLE_PYSTACK 0
