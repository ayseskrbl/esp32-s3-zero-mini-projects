#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LED_PIN_1 GPIO_NUM_2
#define LED_PIN_2 GPIO_NUM_10
#define LED_PIN_3 GPIO_NUM_8

void app_main(void) {
    gpio_reset_pin(LED_PIN_1); 
    gpio_set_direction(LED_PIN_1, GPIO_MODE_OUTPUT);
    gpio_reset_pin(LED_PIN_2); 
    gpio_set_direction(LED_PIN_2, GPIO_MODE_OUTPUT);
    gpio_reset_pin(LED_PIN_3); 
    gpio_set_direction(LED_PIN_3, GPIO_MODE_OUTPUT);


    
while (1) {
    gpio_set_level(LED_PIN_1, 1);
    gpio_set_level(LED_PIN_2, 0);
    gpio_set_level(LED_PIN_3, 0);
    vTaskDelay(pdMS_TO_TICKS(500));

    gpio_set_level(LED_PIN_1, 0);
    gpio_set_level(LED_PIN_2, 1);
    gpio_set_level(LED_PIN_3, 0);
    vTaskDelay(pdMS_TO_TICKS(500));

    gpio_set_level(LED_PIN_1, 0);
    gpio_set_level(LED_PIN_2, 0);
    gpio_set_level(LED_PIN_3, 1);
    vTaskDelay(pdMS_TO_TICKS(500));
}

}