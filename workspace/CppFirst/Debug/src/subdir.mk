################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ArraysInC.cpp \
../src/Cfoo.cpp \
../src/CppFirst.cpp \
../src/EmptyPlaypen.cpp 

OBJS += \
./src/ArraysInC.o \
./src/Cfoo.o \
./src/CppFirst.o \
./src/EmptyPlaypen.o 

CPP_DEPS += \
./src/ArraysInC.d \
./src/Cfoo.d \
./src/CppFirst.d \
./src/EmptyPlaypen.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/UX/rtakacsux/Project/Cpp/YouCanProgramInCpp/unix_tutorial/fgw_headers -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


