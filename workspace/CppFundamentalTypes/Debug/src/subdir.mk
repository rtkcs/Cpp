################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CppFundamentalTypes.cpp \
../src/ExceptionsHandling.cpp \
../src/ExceptionsHandlingCountMean.cpp \
../src/ExceptionsHandlingCountMean2Largest.cpp \
../src/ExceptionsHandlingSmallest.cpp \
../src/ExceptionsHandlingSmallestNegative.cpp \
../src/FloatingPoint.cpp \
../src/FloatingPointDateTimes.cpp \
../src/FloatingPointHarmonicMean.cpp \
../src/FloatingPointMoreMeans.cpp \
../src/FloatingPointRootMeanSquare.cpp \
../src/Playpen.cpp \
../src/PlaypenPrompt.cpp \
../src/PlaypenScale.cpp \
../src/SimpleProgram.cpp \
../src/Text.cpp \
../src/TextCountOfA.cpp \
../src/TextCountOfLetters.cpp 

OBJS += \
./src/CppFundamentalTypes.o \
./src/ExceptionsHandling.o \
./src/ExceptionsHandlingCountMean.o \
./src/ExceptionsHandlingCountMean2Largest.o \
./src/ExceptionsHandlingSmallest.o \
./src/ExceptionsHandlingSmallestNegative.o \
./src/FloatingPoint.o \
./src/FloatingPointDateTimes.o \
./src/FloatingPointHarmonicMean.o \
./src/FloatingPointMoreMeans.o \
./src/FloatingPointRootMeanSquare.o \
./src/Playpen.o \
./src/PlaypenPrompt.o \
./src/PlaypenScale.o \
./src/SimpleProgram.o \
./src/Text.o \
./src/TextCountOfA.o \
./src/TextCountOfLetters.o 

CPP_DEPS += \
./src/CppFundamentalTypes.d \
./src/ExceptionsHandling.d \
./src/ExceptionsHandlingCountMean.d \
./src/ExceptionsHandlingCountMean2Largest.d \
./src/ExceptionsHandlingSmallest.d \
./src/ExceptionsHandlingSmallestNegative.d \
./src/FloatingPoint.d \
./src/FloatingPointDateTimes.d \
./src/FloatingPointHarmonicMean.d \
./src/FloatingPointMoreMeans.d \
./src/FloatingPointRootMeanSquare.d \
./src/Playpen.d \
./src/PlaypenPrompt.d \
./src/PlaypenScale.d \
./src/SimpleProgram.d \
./src/Text.d \
./src/TextCountOfA.d \
./src/TextCountOfLetters.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/UX/rtakacsux/Project/Cpp/YouCanProgramInCpp/unix_tutorial/fgw_headers -I/home/UX/rtakacsux/Project/Cpp/YouCanProgramInCpp/unix_tutorial/fgw_headers/Release -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


