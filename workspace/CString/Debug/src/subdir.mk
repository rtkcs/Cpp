################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Boolean.c \
../src/CString.c \
../src/Character.c \
../src/DefiningConstants.c \
../src/DefiningVariables.c \
../src/Enumeration.c \
../src/LibraryFunctions.c \
../src/Limits.c \
../src/OperationWithString.c \
../src/Sizeof.c \
../src/WorkingWithStrings.c 

OBJS += \
./src/Boolean.o \
./src/CString.o \
./src/Character.o \
./src/DefiningConstants.o \
./src/DefiningVariables.o \
./src/Enumeration.o \
./src/LibraryFunctions.o \
./src/Limits.o \
./src/OperationWithString.o \
./src/Sizeof.o \
./src/WorkingWithStrings.o 

C_DEPS += \
./src/Boolean.d \
./src/CString.d \
./src/Character.d \
./src/DefiningConstants.d \
./src/DefiningVariables.d \
./src/Enumeration.d \
./src/LibraryFunctions.d \
./src/Limits.d \
./src/OperationWithString.d \
./src/Sizeof.d \
./src/WorkingWithStrings.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


