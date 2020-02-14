/* Includes ------------------------------------------------------------------*/
#include "cmsis_os.h"

#include "bsp_delay.h"

#include "main.h"

/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private typedef -----------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function  ---------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/
int BSP_Delay(uint32_t ms) {
    if (osKernelRunning()) {
		osDelay(ms);
	} else {
		HAL_Delay(ms);
    }
	return 0;
}