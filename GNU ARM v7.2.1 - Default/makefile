################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include protocol/firmata/subdir.mk
-include protocol/bluetooth/lib/EFR32BG1B/GCC/subdir.mk
-include platform/emlib/src/subdir.mk
-include platform/emdrv/tempdrv/src/subdir.mk
-include platform/emdrv/sleep/src/subdir.mk
-include platform/Device/SiliconLabs/EFR32BG1B/Source/GCC/subdir.mk
-include platform/Device/SiliconLabs/EFR32BG1B/Source/subdir.mk
-include hardware/kit/common/drivers/subdir.mk
-include hardware/kit/common/bsp/subdir.mk
-include app/bluetooth/common/util/subdir.mk
-include .metadata/.plugins/org.eclipse.cdt.make.core/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: artik-firmata.axf

# Tool invocations
artik-firmata.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m4 -mthumb -T "/home/alex/GitHub/artik-firmata/efr32bg1b232f256gm48.ld" -Xlinker --gc-sections -Xlinker -Map="artik-firmata.map" -mfpu=fpv4-sp-d16 -mfloat-abi=softfp --specs=nano.specs -o artik-firmata.axf -Wl,--start-group "./.metadata/.plugins/org.eclipse.cdt.make.core/specs.o" "./app/bluetooth/common/util/infrastructure.o" "./application_properties.o" "./gatt_db.o" "./init_app.o" "./init_board_efr32xg1.o" "./init_mcu_efr32xg1.o" "./main.o" "./pti.o" "./hardware/kit/common/bsp/bsp_stk.o" "./hardware/kit/common/drivers/mx25flash_spi.o" "./platform/Device/SiliconLabs/EFR32BG1B/Source/GCC/startup_efr32bg1b.o" "./platform/Device/SiliconLabs/EFR32BG1B/Source/system_efr32bg1b.o" "./platform/emdrv/sleep/src/sleep.o" "./platform/emdrv/tempdrv/src/tempdrv.o" "./platform/emlib/src/em_assert.o" "./platform/emlib/src/em_cmu.o" "./platform/emlib/src/em_core.o" "./platform/emlib/src/em_cryotimer.o" "./platform/emlib/src/em_crypto.o" "./platform/emlib/src/em_emu.o" "./platform/emlib/src/em_gpio.o" "./platform/emlib/src/em_i2c.o" "./platform/emlib/src/em_msc.o" "./platform/emlib/src/em_rmu.o" "./platform/emlib/src/em_rtcc.o" "./platform/emlib/src/em_se.o" "./platform/emlib/src/em_system.o" "./platform/emlib/src/em_timer.o" "./platform/emlib/src/em_usart.o" "./protocol/firmata/Serial.o" "/home/alex/GitHub/artik-firmata/protocol/bluetooth/lib/EFR32BG1B/GCC/libmbedtls.a" "/home/alex/GitHub/artik-firmata/protocol/bluetooth/lib/EFR32BG1B/GCC/libpsstore.a" "/home/alex/GitHub/artik-firmata/protocol/bluetooth/lib/EFR32BG1B/GCC/binapploader.o" "/home/alex/GitHub/artik-firmata/protocol/bluetooth/lib/EFR32BG1B/GCC/libbluetooth.a" "/home/alex/GitHub/artik-firmata/platform/radio/rail_lib/autogen/librail_release/librail_efr32xg1_gcc_release.a" -lm -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: artik-firmata.hex'
	arm-none-eabi-objcopy -O ihex "artik-firmata.axf" "artik-firmata.hex"
	@echo ' '

	@echo 'Building bin file: artik-firmata.bin'
	arm-none-eabi-objcopy -O binary "artik-firmata.axf" "artik-firmata.bin"
	@echo ' '

	@echo 'Building s37 file: artik-firmata.s37'
	arm-none-eabi-objcopy -O srec "artik-firmata.axf" "artik-firmata.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "artik-firmata.axf"
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) artik-firmata.axf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
