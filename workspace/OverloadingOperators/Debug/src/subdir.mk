################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/OverloadingOperators.cpp \
../src/rational.cpp \
../src/testrational.cpp 

OBJS += \
./src/OverloadingOperators.o \
./src/rational.o \
./src/testrational.o 

CPP_DEPS += \
./src/OverloadingOperators.d \
./src/rational.d \
./src/testrational.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/UX/rtakacsux/Project/Cpp/workspace/OverloadingOperators/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


