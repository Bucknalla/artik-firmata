################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../platform/Device/SiliconLabs/EFR32BG1B/Source/GCC/startup_efr32bg1b.c 

OBJS += \
./platform/Device/SiliconLabs/EFR32BG1B/Source/GCC/startup_efr32bg1b.o 

C_DEPS += \
./platform/Device/SiliconLabs/EFR32BG1B/Source/GCC/startup_efr32bg1b.d 


# Each subdirectory must supply rules for building sources it contributes
platform/Device/SiliconLabs/EFR32BG1B/Source/GCC/startup_efr32bg1b.o: ../platform/Device/SiliconLabs/EFR32BG1B/Source/GCC/startup_efr32bg1b.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m4 -mthumb -std=c99 '-DEFR32BG1B232F256GM48=1' '-D__HEAP_SIZE=0xD00' '-D__STACK_SIZE=0x800' '-D__StackLimit=0x20000000' '-DHAL_CONFIG=1' -I"/home/alex/SimplicityStudio/workspace/firmata/platform/emdrv/sleep/src" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/CMSIS/Include" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/Device/SiliconLabs/EFR32BG1B/Include" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/emlib/src" -I"/home/alex/SimplicityStudio/workspace/firmata/hardware/kit/EFR32BG1_BRD4300C/config" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/emlib/inc" -I"/home/alex/SimplicityStudio/workspace/firmata/app/bluetooth/common/util" -I"/home/alex/SimplicityStudio/workspace/firmata/hardware/kit/common/drivers" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/radio/rail_lib/common" -I"/home/alex/SimplicityStudio/workspace/firmata/hardware/kit/common/bsp" -I"/home/alex/SimplicityStudio/workspace/firmata/hardware/kit/common/halconfig" -I"/home/alex/SimplicityStudio/workspace/firmata/protocol/bluetooth/ble_stack/inc/common" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/Device/SiliconLabs/EFR32BG1B/Source/GCC" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/radio/rail_lib/chip/efr32/efr32xg1x" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/bootloader/api" -I"/home/alex/SimplicityStudio/workspace/firmata/protocol/bluetooth/ble_stack/inc/soc" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/emdrv/tempdrv/inc" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/emdrv/common/inc" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/emdrv/tempdrv/src" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/Device/SiliconLabs/EFR32BG1B/Source" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/emdrv/uartdrv/inc" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/emdrv/gpiointerrupt/inc" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/emdrv/sleep/inc" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/halconfig/inc/hal-config" -I"/home/alex/SimplicityStudio/workspace/firmata" -I"/home/alex/SimplicityStudio/workspace/firmata/platform/bootloader" -O2 -Wall -c -fmessage-length=0 -ffunction-sections -fdata-sections -mfpu=fpv4-sp-d16 -mfloat-abi=softfp -MMD -MP -MF"platform/Device/SiliconLabs/EFR32BG1B/Source/GCC/startup_efr32bg1b.d" -MT"platform/Device/SiliconLabs/EFR32BG1B/Source/GCC/startup_efr32bg1b.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


