#pragma once
#define MATRIX_ROWS 3
#define MATRIX_COLS 3
#define MATRIX_ROW_PINS { PB8, PB9, PA9 }
#define MATRIX_COL_PINS { PA2, PA4, PA10 }
#define ENCODER_PAD_A { PA6 }
#define ENCODER_PAD_B { PA10 }
#define ENCODER_RESOLUTION 4
#define OLED_DISPLAY_128X32}
#define OLED_FONT_H "keymaps/default/glcdfont.c"
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN PA3
#define I2C1_SDA_PIN PA4
#define DEBOUNCE 5
#define USB_VBUS_PIN PA11
