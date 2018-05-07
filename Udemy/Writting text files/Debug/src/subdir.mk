################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Writting\ text\ files.cpp 

OBJS += \
./src/Writting\ text\ files.o 

CPP_DEPS += \
./src/Writting\ text\ files.d 


# Each subdirectory must supply rules for building sources it contributes
src/Writting\ text\ files.o: ../src/Writting\ text\ files.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Writting text files.d" -MT"src/Writting\ text\ files.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


