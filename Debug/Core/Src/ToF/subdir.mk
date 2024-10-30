################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/ToF/VL53L1X_api.c \
../Core/Src/ToF/VL53L1X_calibration.c 

OBJS += \
./Core/Src/ToF/VL53L1X_api.o \
./Core/Src/ToF/VL53L1X_calibration.o 

C_DEPS += \
./Core/Src/ToF/VL53L1X_api.d \
./Core/Src/ToF/VL53L1X_calibration.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/ToF/%.o Core/Src/ToF/%.su Core/Src/ToF/%.cyclo: ../Core/Src/ToF/%.c Core/Src/ToF/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L031xx -c -I../Core/Inc -I../Drivers/STM32L0xx_HAL_Driver/Inc -I../Drivers/STM32L0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L0xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/floro/STM32CubeIDE/workspace_1.15.1/ToF_Detection_FHV/Core/Inc/ToF" -I"C:/Users/floro/STM32CubeIDE/workspace_1.15.1/ToF_Detection_FHV/Core/Inc/ToF_platform" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-ToF

clean-Core-2f-Src-2f-ToF:
	-$(RM) ./Core/Src/ToF/VL53L1X_api.cyclo ./Core/Src/ToF/VL53L1X_api.d ./Core/Src/ToF/VL53L1X_api.o ./Core/Src/ToF/VL53L1X_api.su ./Core/Src/ToF/VL53L1X_calibration.cyclo ./Core/Src/ToF/VL53L1X_calibration.d ./Core/Src/ToF/VL53L1X_calibration.o ./Core/Src/ToF/VL53L1X_calibration.su

.PHONY: clean-Core-2f-Src-2f-ToF

