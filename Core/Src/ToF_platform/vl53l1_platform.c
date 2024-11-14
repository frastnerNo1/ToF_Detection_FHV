/**
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#include "vl53l1_platform.h"
#include "stm32l0xx_hal.h"
#include <string.h>
#include <time.h>
#include <math.h>
#include "main.h"

#define I2C_TIME_OUT_BASE   10
#define I2C_TIME_OUT_BYTE   1

uint8_t _I2CBuffer[256];

static void _I2CWrite(uint16_t Dev, uint8_t *pdata, uint32_t count) {

    int i2c_time_out = I2C_TIME_OUT_BASE+ count* I2C_TIME_OUT_BYTE;

    HAL_I2C_Master_Transmit(&hi2c1, Dev, pdata, count, i2c_time_out);
}

static void _I2CRead(uint16_t Dev, uint8_t *pdata, uint32_t count) {

    int i2c_time_out = I2C_TIME_OUT_BASE+ count* I2C_TIME_OUT_BYTE;

    HAL_I2C_Master_Receive(&hi2c1, Dev|1, pdata, count, i2c_time_out);
}

int8_t VL53L1_WriteMulti( uint16_t dev, uint16_t index, uint8_t *pdata, uint32_t count) {
    if (count > sizeof(_I2CBuffer) - 1) {
        return 1;
    }
    _I2CBuffer[0] = index>>8;
    _I2CBuffer[1] = index&0xFF;
    memcpy(&_I2CBuffer[2], pdata, count);
    _I2CWrite(dev, _I2CBuffer, count + 2);
	return 0;
}

int8_t VL53L1_ReadMulti(uint16_t dev, uint16_t index, uint8_t *pdata, uint32_t count){
    _I2CBuffer[0] = index>>8;
    _I2CBuffer[1] = index&0xFF;
    _I2CWrite(dev, _I2CBuffer, 2);
    _I2CRead(dev, pdata, count);

    return 0;
}

int8_t VL53L1_WrByte(uint16_t dev, uint16_t index, uint8_t data) {
    _I2CBuffer[0] = index>>8;
    _I2CBuffer[1] = index&0xFF;
    _I2CBuffer[2] = data;

    _I2CWrite(dev, _I2CBuffer, 3);
	return 0;
}

int8_t VL53L1_WrWord(uint16_t dev, uint16_t index, uint16_t data) {
    _I2CBuffer[0] = index>>8;
    _I2CBuffer[1] = index&0xFF;
    _I2CBuffer[2] = data >> 8;
    _I2CBuffer[3] = data & 0x00FF;

    _I2CWrite(dev, _I2CBuffer, 4);
	return 0;
}

int8_t VL53L1_WrDWord(uint16_t dev, uint16_t index, uint32_t data) {
    _I2CBuffer[0] = index>>8;
    _I2CBuffer[1] = index&0xFF;
    _I2CBuffer[2] = (data >> 24) & 0xFF;
    _I2CBuffer[3] = (data >> 16) & 0xFF;
    _I2CBuffer[4] = (data >> 8)  & 0xFF;
    _I2CBuffer[5] = (data >> 0 ) & 0xFF;
    _I2CWrite(dev, _I2CBuffer, 6);

	return 0;
}

int8_t VL53L1_RdByte(uint16_t dev, uint16_t index, uint8_t *data) {
	_I2CBuffer[0] = index>>8;
	_I2CBuffer[1] = index&0xFF;
    _I2CWrite(dev, _I2CBuffer, 2);
    _I2CRead(dev, data, 1);

	return 0;
}

int8_t VL53L1_RdWord(uint16_t dev, uint16_t index, uint16_t *data) {
    _I2CBuffer[0] = index>>8;
	_I2CBuffer[1] = index&0xFF;
    _I2CWrite(dev, _I2CBuffer, 2);
    _I2CRead(dev, _I2CBuffer, 2);

    *data = ((uint16_t)_I2CBuffer[0]<<8) + (uint16_t)_I2CBuffer[1];

	return 0;
}

int8_t VL53L1_RdDWord(uint16_t dev, uint16_t index, uint32_t *data) {
    _I2CBuffer[0] = index>>8;
	_I2CBuffer[1] = index&0xFF;
    _I2CWrite(dev, _I2CBuffer, 2);
    _I2CRead(dev, _I2CBuffer, 4);

    *data = ((uint32_t)_I2CBuffer[0]<<24) + ((uint32_t)_I2CBuffer[1]<<16) + ((uint32_t)_I2CBuffer[2]<<8) + (uint32_t)_I2CBuffer[3];

	return 0;
}

int8_t VL53L1_WaitMs(uint16_t dev, int32_t wait_ms){
	(void)dev;
	HAL_Delay(wait_ms);
	return 0;
}

int8_t VL53L1_SensorOn (VL53L1_DEV dev){
	HAL_GPIO_WritePin(dev->tof_wakeport, dev->tof_wakepin, GPIO_PIN_SET);
	return 0;
}

int8_t VL53L1_SensorOff (VL53L1_DEV dev){
	HAL_GPIO_WritePin(dev->tof_wakeport, dev->tof_wakepin, GPIO_PIN_RESET);
	return 0;
}
