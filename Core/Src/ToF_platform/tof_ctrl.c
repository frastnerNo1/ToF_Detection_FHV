/*
 * tof_ctrl.c
 *
 *  Created on: Nov 14, 2024
 *      Author: floro
 */
#include "main.h"
#include "tof_ctrl.h"
#include "VL53L1X_api.h"

#define RANGEMODE 1	//0 = Longrange, 1 = Shortrange

void tof_ctrl_boot(VL53L1_DEV dev, uint8_t addr){
	VL53L1_SensorOn(dev);
	HAL_Delay(500);

    uint8_t booted = 0;

	printf("Start Sensor: %x\r\n", (uint8_t)dev->tof_addr);
	while(booted == 0){
	    VL53L1X_BootState(dev->tof_addr, &booted);
	    HAL_Delay(1000);
	    printf("Booting\r\n");
	}
	VL53L1X_SensorInit(dev->tof_addr);
	VL53L1X_SetI2CAddress(dev->tof_addr, addr);
	dev->tof_addr = addr;
	VL53L1X_SetDistanceMode(dev->tof_addr, RANGEMODE);
	printf("Ready Sensor: %x\r\n", (uint8_t)dev->tof_addr);
}

void tof_ctrl_get_distance(VL53L1_DEV dev, uint16_t* pDistance, uint16_t timeout){
    uint8_t dataReady = 0;
    uint32_t timestamp = HAL_GetTick();

    VL53L1X_StartRanging(dev->tof_addr);
    while(dataReady == 0){
        VL53L1X_CheckForDataReady(dev->tof_addr, &dataReady);
        if((HAL_GetTick() - timestamp) > timeout){
        	return;
        }
    }
    VL53L1X_GetDistance(dev->tof_addr, pDistance);
    VL53L1X_ClearInterrupt(dev->tof_addr);
    VL53L1X_StopRanging(dev->tof_addr);
}
