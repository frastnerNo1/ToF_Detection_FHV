/*
 * tof_ctrl.h
 *
 *  Created on: Nov 13, 2024
 *      Author: floro
 */

#ifndef INC_TOF_PLATFORM_TOF_CTRL_H_
#define INC_TOF_PLATFORM_TOF_CTRL_H_

#include "vl53l1_platform.h"

void tof_ctrl_init(VL53L1_DEV dev);

void tof_ctrl_set_addr(VL53L1_DEV dev, uint8_t newAddr);

void tof_ctrl_get_range(VL53L1_DEV dev, uint16_t* pDistance, uint16_t timeout_ms);

#endif /* INC_TOF_PLATFORM_TOF_CTRL_H_ */
