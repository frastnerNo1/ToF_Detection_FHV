################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/ToF/vl53l1_api.c \
../Core/Src/ToF/vl53l1_api_calibration.c \
../Core/Src/ToF/vl53l1_api_core.c \
../Core/Src/ToF/vl53l1_api_debug.c \
../Core/Src/ToF/vl53l1_api_preset_modes.c \
../Core/Src/ToF/vl53l1_api_strings.c \
../Core/Src/ToF/vl53l1_core.c \
../Core/Src/ToF/vl53l1_core_support.c \
../Core/Src/ToF/vl53l1_error_strings.c \
../Core/Src/ToF/vl53l1_hist_char.c \
../Core/Src/ToF/vl53l1_nvm.c \
../Core/Src/ToF/vl53l1_nvm_debug.c \
../Core/Src/ToF/vl53l1_register_funcs.c \
../Core/Src/ToF/vl53l1_silicon_core.c \
../Core/Src/ToF/vl53l1_wait.c \
../Core/Src/ToF/vl53l1_zone_presets.c 

OBJS += \
./Core/Src/ToF/vl53l1_api.o \
./Core/Src/ToF/vl53l1_api_calibration.o \
./Core/Src/ToF/vl53l1_api_core.o \
./Core/Src/ToF/vl53l1_api_debug.o \
./Core/Src/ToF/vl53l1_api_preset_modes.o \
./Core/Src/ToF/vl53l1_api_strings.o \
./Core/Src/ToF/vl53l1_core.o \
./Core/Src/ToF/vl53l1_core_support.o \
./Core/Src/ToF/vl53l1_error_strings.o \
./Core/Src/ToF/vl53l1_hist_char.o \
./Core/Src/ToF/vl53l1_nvm.o \
./Core/Src/ToF/vl53l1_nvm_debug.o \
./Core/Src/ToF/vl53l1_register_funcs.o \
./Core/Src/ToF/vl53l1_silicon_core.o \
./Core/Src/ToF/vl53l1_wait.o \
./Core/Src/ToF/vl53l1_zone_presets.o 

C_DEPS += \
./Core/Src/ToF/vl53l1_api.d \
./Core/Src/ToF/vl53l1_api_calibration.d \
./Core/Src/ToF/vl53l1_api_core.d \
./Core/Src/ToF/vl53l1_api_debug.d \
./Core/Src/ToF/vl53l1_api_preset_modes.d \
./Core/Src/ToF/vl53l1_api_strings.d \
./Core/Src/ToF/vl53l1_core.d \
./Core/Src/ToF/vl53l1_core_support.d \
./Core/Src/ToF/vl53l1_error_strings.d \
./Core/Src/ToF/vl53l1_hist_char.d \
./Core/Src/ToF/vl53l1_nvm.d \
./Core/Src/ToF/vl53l1_nvm_debug.d \
./Core/Src/ToF/vl53l1_register_funcs.d \
./Core/Src/ToF/vl53l1_silicon_core.d \
./Core/Src/ToF/vl53l1_wait.d \
./Core/Src/ToF/vl53l1_zone_presets.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/ToF/%.o Core/Src/ToF/%.su Core/Src/ToF/%.cyclo: ../Core/Src/ToF/%.c Core/Src/ToF/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32L031xx -c -I../Core/Inc -I../Drivers/STM32L0xx_HAL_Driver/Inc -I../Drivers/STM32L0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L0xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/floro/STM32CubeIDE/workspace_1.15.1/ToF_Detection_FHV/Core/Inc/ToF" -I"C:/Users/floro/STM32CubeIDE/workspace_1.15.1/ToF_Detection_FHV/Core/Inc/ToF_platform" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-ToF

clean-Core-2f-Src-2f-ToF:
	-$(RM) ./Core/Src/ToF/vl53l1_api.cyclo ./Core/Src/ToF/vl53l1_api.d ./Core/Src/ToF/vl53l1_api.o ./Core/Src/ToF/vl53l1_api.su ./Core/Src/ToF/vl53l1_api_calibration.cyclo ./Core/Src/ToF/vl53l1_api_calibration.d ./Core/Src/ToF/vl53l1_api_calibration.o ./Core/Src/ToF/vl53l1_api_calibration.su ./Core/Src/ToF/vl53l1_api_core.cyclo ./Core/Src/ToF/vl53l1_api_core.d ./Core/Src/ToF/vl53l1_api_core.o ./Core/Src/ToF/vl53l1_api_core.su ./Core/Src/ToF/vl53l1_api_debug.cyclo ./Core/Src/ToF/vl53l1_api_debug.d ./Core/Src/ToF/vl53l1_api_debug.o ./Core/Src/ToF/vl53l1_api_debug.su ./Core/Src/ToF/vl53l1_api_preset_modes.cyclo ./Core/Src/ToF/vl53l1_api_preset_modes.d ./Core/Src/ToF/vl53l1_api_preset_modes.o ./Core/Src/ToF/vl53l1_api_preset_modes.su ./Core/Src/ToF/vl53l1_api_strings.cyclo ./Core/Src/ToF/vl53l1_api_strings.d ./Core/Src/ToF/vl53l1_api_strings.o ./Core/Src/ToF/vl53l1_api_strings.su ./Core/Src/ToF/vl53l1_core.cyclo ./Core/Src/ToF/vl53l1_core.d ./Core/Src/ToF/vl53l1_core.o ./Core/Src/ToF/vl53l1_core.su ./Core/Src/ToF/vl53l1_core_support.cyclo ./Core/Src/ToF/vl53l1_core_support.d ./Core/Src/ToF/vl53l1_core_support.o ./Core/Src/ToF/vl53l1_core_support.su ./Core/Src/ToF/vl53l1_error_strings.cyclo ./Core/Src/ToF/vl53l1_error_strings.d ./Core/Src/ToF/vl53l1_error_strings.o ./Core/Src/ToF/vl53l1_error_strings.su ./Core/Src/ToF/vl53l1_hist_char.cyclo ./Core/Src/ToF/vl53l1_hist_char.d ./Core/Src/ToF/vl53l1_hist_char.o ./Core/Src/ToF/vl53l1_hist_char.su ./Core/Src/ToF/vl53l1_nvm.cyclo ./Core/Src/ToF/vl53l1_nvm.d ./Core/Src/ToF/vl53l1_nvm.o ./Core/Src/ToF/vl53l1_nvm.su ./Core/Src/ToF/vl53l1_nvm_debug.cyclo ./Core/Src/ToF/vl53l1_nvm_debug.d ./Core/Src/ToF/vl53l1_nvm_debug.o ./Core/Src/ToF/vl53l1_nvm_debug.su ./Core/Src/ToF/vl53l1_register_funcs.cyclo ./Core/Src/ToF/vl53l1_register_funcs.d ./Core/Src/ToF/vl53l1_register_funcs.o ./Core/Src/ToF/vl53l1_register_funcs.su ./Core/Src/ToF/vl53l1_silicon_core.cyclo ./Core/Src/ToF/vl53l1_silicon_core.d ./Core/Src/ToF/vl53l1_silicon_core.o ./Core/Src/ToF/vl53l1_silicon_core.su ./Core/Src/ToF/vl53l1_wait.cyclo ./Core/Src/ToF/vl53l1_wait.d ./Core/Src/ToF/vl53l1_wait.o ./Core/Src/ToF/vl53l1_wait.su ./Core/Src/ToF/vl53l1_zone_presets.cyclo ./Core/Src/ToF/vl53l1_zone_presets.d ./Core/Src/ToF/vl53l1_zone_presets.o ./Core/Src/ToF/vl53l1_zone_presets.su

.PHONY: clean-Core-2f-Src-2f-ToF

