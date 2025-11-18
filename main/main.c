#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

static const char *TAG = "MAIN";

void app_main(void)
{
    ESP_LOGI(TAG, "Hello from ESP32!");
    
    int counter = 0;
    while(1) {
        ESP_LOGI(TAG, "Counter: %d", counter++);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
