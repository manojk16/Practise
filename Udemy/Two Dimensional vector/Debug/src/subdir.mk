################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Two\ Dimensional\ Vector.cpp 

OBJS += \
./src/Two\ Dimensional\ Vector.o 

CPP_DEPS += \
./src/Two\ Dimensional\ Vector.d 


# Each subdirectory must supply rules for building sources it contributes
src/Two\ Dimensional\ Vector.o: ../src/Two\ Dimensional\ Vector.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Two Dimensional Vector.d" -MT"src/Two\ Dimensional\ Vector.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


