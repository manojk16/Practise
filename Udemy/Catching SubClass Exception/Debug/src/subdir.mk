################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Catching\ SubClass\ Exception.cpp 

OBJS += \
./src/Catching\ SubClass\ Exception.o 

CPP_DEPS += \
./src/Catching\ SubClass\ Exception.d 


# Each subdirectory must supply rules for building sources it contributes
src/Catching\ SubClass\ Exception.o: ../src/Catching\ SubClass\ Exception.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Catching SubClass Exception.d" -MT"src/Catching\ SubClass\ Exception.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


