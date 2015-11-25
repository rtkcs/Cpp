################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Ascii.c \
../src/CelaCastCisla.c \
../src/Definicie.c \
../src/DekaHexa.c \
../src/Delenie.c \
../src/Obdlznik.c \
../src/Priemer.c \
../src/PripocetDane.c \
../src/TerminalIO.c \
../src/TypyCisel.c \
../src/VelkePismena.c 

OBJS += \
./src/Ascii.o \
./src/CelaCastCisla.o \
./src/Definicie.o \
./src/DekaHexa.o \
./src/Delenie.o \
./src/Obdlznik.o \
./src/Priemer.o \
./src/PripocetDane.o \
./src/TerminalIO.o \
./src/TypyCisel.o \
./src/VelkePismena.o 

C_DEPS += \
./src/Ascii.d \
./src/CelaCastCisla.d \
./src/Definicie.d \
./src/DekaHexa.d \
./src/Delenie.d \
./src/Obdlznik.d \
./src/Priemer.d \
./src/PripocetDane.d \
./src/TerminalIO.d \
./src/TypyCisel.d \
./src/VelkePismena.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


