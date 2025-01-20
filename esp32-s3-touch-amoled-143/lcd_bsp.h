#ifndef LCD_BSP_H
#define LCD_BSP_H
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/spi_master.h"
#include "esp_err.h"
#include "esp_timer.h"
#include "esp_lcd_panel_interface.h"
#include "esp_lcd_panel_io.h"
#include "esp_lcd_panel_vendor.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_panel_commands.h"
#include "esp_check.h"
#include "driver/gpio.h"

#ifdef __cplusplus
extern "C" {
#endif 
void lcd_lvgl_Init(void);
extern esp_lcd_panel_handle_t expanel_handle;
#ifdef __cplusplus
}
#endif

#endif