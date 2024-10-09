################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/ToF_platform/vl53l1_platform.c \
../Core/Src/ToF_platform/vl53l1_platform_log.c 

OBJS += \
./Core/Src/ToF_platform/vl53l1_platform.o \
./Core/Src/ToF_platform/vl53l1_platform_log.o 

C_DEPS += \
./Core/Src/ToF_platform/vl53l1_platform.d \
./Core/Src/ToF_platform/vl53l1_platform_log.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/ToF_platform/%.o Core/Src/ToF_platform/%.su Core/Src/ToF_platform/%.cyclo: ../Core/Src/ToF_platform/%.c Core/Src/ToF_platform/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L031xx -c -I../Core/Inc -I../Drivers/STM32L0xx_HAL_Driver/Inc -I../Drivers/STM32L0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L0xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/floro/STM32CubeIDE/workspace_1.15.1/ToF_Detection_FHV/Core/Inc/ToF" -I"C:/Users/floro/STM32CubeIDE/workspace_1.15.1/ToF_Detection_FHV/Core/Inc/ToF_platform" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-ToF_platform

clean-Core-2f-Src-2f-ToF_platform:
	-$(RM) ./Core/Src/ToF_platform/vl53l1_platform.cyclo ./Core/Src/ToF_platform/vl53l1_platform.d ./Core/Src/ToF_platform/vl53l1_platform.o ./Core/Src/ToF_platform/vl53l1_platform.su ./Core/Src/ToF_platform/vl53l1_platform_log.cyclo ./Core/Src/ToF_platform/vl53l1_platform_log.d ./Core/Src/ToF_platform/vl53l1_platform_log.o ./Core/Src/ToF_platform/vl53l1_platform_log.su

.PHONY: clean-Core-2f-Src-2f-ToF_platform

