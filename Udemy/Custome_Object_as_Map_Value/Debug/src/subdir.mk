################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Custome\ Object\ as\ Map\ Value.cpp \
../src/custome_2.cpp 

OBJS += \
./src/Custome\ Object\ as\ Map\ Value.o \
./src/custome_2.o 

CPP_DEPS += \
./src/Custome\ Object\ as\ Map\ Value.d \
./src/custome_2.d 


# Each subdirectory must supply rules for building sources it contributes
src/Custome\ Object\ as\ Map\ Value.o: ../src/Custome\ Object\ as\ Map\ Value.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Custome Object as Map Value.d" -MT"src/Custome\ Object\ as\ Map\ Value.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


