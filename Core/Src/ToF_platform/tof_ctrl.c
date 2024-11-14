/*
 * tof_ctrl.c
 *
 *  Created on: Nov 13, 2024
 *      Author: floro
 */
#include "main.h"
#include "VL53L1X_api.h"
#include "VL53L1X_calibration.h"
#include "tof_ctrl.h"

#define LOWER_THRESHOLD_MM		20
#define UPPER_THRESHOLD_MM		100

enum window_modes{
	below,
	beyond,
	outOfWindow,
	insideWindow
};

void tof_ctrl_init(VL53L1_DEV dev){
	uint8_t booted = 0;
	VL53L1_SensorOn(dev);
	while(booted == 0){
	    VL53L1X_BootState(dev->tof_addr, &booted);
	    HAL_Delay(1000);
	}
	VL53L1X_SensorInit(dev->tof_addr);
	HAL_Delay(100);
	VL53L1_SensorOff(dev);
}

void tof_ctrl_set_addr(VL53L1_DEV dev, uint8_t newAddr){
	VL53L1_SensorOn(dev);
	VL53L1X_SetI2CAddress(dev->tof_addr, newAddr);
	dev->tof_addr = (uint32_t)newAddr;
}

void tof_ctrl_config(VL53L1_DEV dev){
	VL53L1X_SetDistanceMode(dev->tof_addr, 1);
	VL53L1X_SetTimingBudgetInMs(dev->tof_addr, 200);
#ifdef WINDOWMODE
	VL53L1X_SetInterruptPolarity(dev->tof_addr, 1);
	VL53L1X_SetDistanceThreshold(dev->tof_addr, LOWER_THRESHOLD_MM, UPPER_THRESHOLD_MM, below, 0);
#endif
}

void tof_ctrl_get_range(VL53L1_DEV dev, uint16_t* pDistance, uint16_t timeout_ms){
	uint8_t sensorState = 0;
	uint8_t status = 0;
	uint32_t timestamp = HAL_GetTick();
	//VL53L1X_StartRanging(dev->tof_addr);
	while(sensorState == 0){
		VL53L1X_CheckForDataReady(dev->tof_addr, &sensorState);
		if((HAL_GetTick() - timestamp) > timeout_ms){
			printf("Timeout!\r\n");
			*pDistance = 0;
			return;
		}
	}
	VL53L1X_GetRangeStatus(dev->tof_addr, &status);
	VL53L1X_GetDistance(dev->tof_addr, pDistance);
	VL53L1X_ClearInterrupt(dev->tof_addr);
	printf("Status: %d", status);
	//VL53L1X_StopRanging(dev->tof_addr);
}
