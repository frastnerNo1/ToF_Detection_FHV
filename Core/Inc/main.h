/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define X_DIR_IN_Pin GPIO_PIN_0
#define X_DIR_IN_GPIO_Port GPIOA
#define Y_DIR_IN_Pin GPIO_PIN_1
#define Y_DIR_IN_GPIO_Port GPIOA
#define VCP_TX_Pin GPIO_PIN_2
#define VCP_TX_GPIO_Port GPIOA
#define STOP_OUT_Pin GPIO_PIN_3
#define STOP_OUT_GPIO_Port GPIOA
#define SLOW_OUT_Pin GPIO_PIN_4
#define SLOW_OUT_GPIO_Port GPIOA
#define INT_ToF2_Pin GPIO_PIN_0
#define INT_ToF2_GPIO_Port GPIOB
#define INT_ToF2_EXTI_IRQn EXTI0_1_IRQn
#define INT_ToF3_Pin GPIO_PIN_1
#define INT_ToF3_GPIO_Port GPIOB
#define INT_ToF3_EXTI_IRQn EXTI0_1_IRQn
#define INT_ToF4_Pin GPIO_PIN_8
#define INT_ToF4_GPIO_Port GPIOA
#define INT_ToF4_EXTI_IRQn EXTI4_15_IRQn
#define INT_ToF1_Pin GPIO_PIN_12
#define INT_ToF1_GPIO_Port GPIOA
#define INT_ToF1_EXTI_IRQn EXTI4_15_IRQn
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define VCP_RX_Pin GPIO_PIN_15
#define VCP_RX_GPIO_Port GPIOA
#define LD3_Pin GPIO_PIN_3
#define LD3_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
