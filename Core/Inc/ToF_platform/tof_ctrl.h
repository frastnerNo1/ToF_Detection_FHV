/*
 * tof_ctrl.h
 *
 *  Created on: Nov 14, 2024
 *      Author: floro
 */

#ifndef INC_TOF_PLATFORM_TOF_CTRL_H_
#define INC_TOF_PLATFORM_TOF_CTRL_H_

#include "vl53l1_platform.h"

void tof_ctrl_boot(VL53L1_DEV dev, uint8_t addr);

void tof_ctrl_get_distance(VL53L1_DEV dev, uint16_t* pDistance, uint16_t timeout);

#endif /* INC_TOF_PLATFORM_TOF_CTRL_H_ */
