
#include "main.h"
#include "cmsis_os.h"


#include"stdio.h"
#include"string.h"
UART_HandleTypeDef huart1;
UART_HandleTypeDef huart2;

osThreadId defaultTaskHandle;
osThreadId recive_taskHandle;
osThreadId send_taskHandle;
osMessageQId myQueueHandle;
char temp[100];
char hum[100];


void recive_temp(void const * argument)
{
  /* USER CODE BEGIN recive_temp */
  /* Infinite loop */

	while(1)
	  {

	    if (xQueueReceive(myQueueHandle, &temp, MAX_DELAY) == pdTRUE)
	    {

	      char buffer[100];

	      sprintf(buffer, "GREEN LEd is on\r\n", temp);
	      HAL_UART_Transmit(&huart2, (uint8_t*)buffer, strlen(buffer),1000);
	      
	      HAL_Delay(1000);
	      char *reb="Green led on \r\n";
	    	      send_temp(reb);

	      		sprintf (&buffer[0], "CMD+MQTTPUB=base/state/temperature,%.2f\r\n",temperature);
	      		HAL_UART_Transmit(&huart1, (uint8_t*)buffer, strlen(buffer),1000);
	      		HAL_Delay(1000);

	     // HAL_UART_Transmit_IT(&huart2,(uint8_t*)buffer, strlen(buffer));
	    	}
	    if (xQueueReceive(myQueueHandle, &hum, portMAX_DELAY) == pdTRUE)
	    	    {

	    	      char buffer[100];

	    	      sprintf(buffer, "BLue led on \r\n", humidity);
	    	      char *rebel="BLue led on \r\n";
	    	      send_temp(rebel);
	    	      HAL_UART_Transmit(&huart2, (uint8_t*)buffer, strlen(buffer),1000);
	    	      HAL_Delay(1000);

	    	      sprintf (&buffer[0], "CMD+MQTTPUB=base/state/humidity,%.2f\r\n",humidity);
	    	      HAL_UART_Transmit(&huart1, (uint8_t*)buffer, strlen(buffer),1000);
	    	      HAL_Delay(1000);

	    	    	}

	    }
	    osDelay(1);
	  }
	 
void send_temp(void const * argument)
{
  /* USER CODE BEGIN send_temp */
  /* Infinite loop */
  for(;;)
  {
	
	     //osDelay(1);
	     xQueueSend(myQueue01Handle, &temperature, MAX_DELAY);

	     xQueueSend(myQueue01Handle, &humidity, MAX_DELAY);


   // osDelay(1);
  }
  /* USER CODE END send_temp */
}
int main(void) {
    HAL_Init();
      osMessageQDef(myQueue01, 16, uint16_t);
  myQueue01Handle = osMessageCreate(osMessageQ(myQueue01), NULL);

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of defaultTask */
  osThreadDef(defaultTask, StartDefaultTask, osPriorityHigh, 0, 128);
  defaultTaskHandle = osThreadCreate(osThread(defaultTask), NULL);

  /* definition and creation of recive_temp_tas */
  osThreadDef(recive_temp_tas, recive_temp, osPriorityHigh, 0, 128);
  recive_temp_tasHandle = osThreadCreate(osThread(recive_temp_tas), NULL);

  /* definition and creation of send_temp2 */
  osThreadDef(send_temp2, send_temp, osPriorityLow, 0, 128);
  send_temp2Handle = osThreadCreate(osThread(send_temp2), NULL);

    LED_Init();
    Button_Init();
    UART2_Init(); // Initialize UART2 communication
  //  UART1_Init();

    uint8_t ledState = 0; 

    while (1) {
            // Check the state of the button
            if (HAL_GPIO_ReadPin(BUTTON_PORT, BUTTON_PIN) == GPIO_PIN_RESET) {
                // Button is pressed, cycle through LED colors

                char message[50];            
                // Add a small delay to debounce the button (adjust as needed)
              

                // Turn on Green LED
                HAL_GPIO_WritePin(LED_PORT, RED_PIN, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(LED_PORT, GREEN_PIN, GPIO_PIN_SET);
                HAL_GPIO_WritePin(LED_PORT, BLUE_PIN, GPIO_PIN_RESET);
                *temp="Green light is ON\r\n";
                recive_temp(temp);

               // sprintf(message, "Green light is ON\r\n");
               // HAL_UART_Transmit(&huart2, (uint8_t*)message, strlen(message), HAL_MAX_DELAY);

                HAL_Delay(2000);

                // Turn on Blue LED
                HAL_GPIO_WritePin(LED_PORT, RED_PIN, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(LED_PORT, GREEN_PIN, GPIO_PIN_RESET);
                HAL_GPIO_WritePin(LED_PORT, BLUE_PIN, GPIO_PIN_SET);
		*hum="Blue light is ON\r\n";
		recive_temp(hum);

               // sprintf(message, "Blue light is ON\r\n");
               // HAL_UART_Transmit(&huart2, (uint8_t*)message, strlen(message), HAL_MAX_DELAY);

                HAL_Delay(2000);
            }
        }
}


