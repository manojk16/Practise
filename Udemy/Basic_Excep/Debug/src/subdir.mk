################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/1_Exercise_Exception.cpp \
../src/Basic_Excep.cpp 

OBJS += \
./src/1_Exercise_Exception.o \
./src/Basic_Excep.o 

CPP_DEPS += \
./src/1_Exercise_Exception.d \
./src/Basic_Excep.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


