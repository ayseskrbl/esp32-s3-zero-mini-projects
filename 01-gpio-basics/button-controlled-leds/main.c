#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <stdio.h>

#define LED_PIN_RED GPIO_NUM_2
#define LED_PIN_GREEN GPIO_NUM_8
#define BUTTON_PIN_RED GPIO_NUM_12
#define BUTTON_PIN_GREEN GPIO_NUM_11

void app_main(void) {
    gpio_reset_pin(LED_PIN_RED); 
    gpio_reset_pin(LED_PIN_GREEN); 

    gpio_set_direction(LED_PIN_RED, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED_PIN_GREEN, GPIO_MODE_OUTPUT);


    gpio_set_direction(BUTTON_PIN_RED, GPIO_MODE_INPUT);
    gpio_set_pull_mode(BUTTON_PIN_RED, GPIO_PULLUP_ONLY);

    gpio_set_direction(BUTTON_PIN_GREEN, GPIO_MODE_INPUT);
    gpio_set_pull_mode(BUTTON_PIN_GREEN, GPIO_PULLUP_ONLY);


    while(1){

        int button_state_red = gpio_get_level(BUTTON_PIN_RED);
        int button_state_green = gpio_get_level(BUTTON_PIN_GREEN);

        if (button_state_red == 0) {
            gpio_set_level(LED_PIN_RED, 1);
        }

        else {
            gpio_set_level(LED_PIN_RED, 0);
        }

        
    
        if (button_state_green == 0) {
            gpio_set_level(LED_PIN_GREEN, 1);
        }

        else {
            gpio_set_level(LED_PIN_GREEN, 0);
        }

        vTaskDelay(pdMS_TO_TICKS(10));
        

    }
       


}