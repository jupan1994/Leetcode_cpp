################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Class1/MergeSort.cpp \
../src/Class1/MoveZeroI.cpp \
../src/Class1/QuickSort.cpp \
../src/Class1/RainbowSort.cpp \
../src/Class1/ReorderArray.cpp \
../src/Class1/SelectionSort.cpp 

OBJS += \
./src/Class1/MergeSort.o \
./src/Class1/MoveZeroI.o \
./src/Class1/QuickSort.o \
./src/Class1/RainbowSort.o \
./src/Class1/ReorderArray.o \
./src/Class1/SelectionSort.o 

CPP_DEPS += \
./src/Class1/MergeSort.d \
./src/Class1/MoveZeroI.d \
./src/Class1/QuickSort.d \
./src/Class1/RainbowSort.d \
./src/Class1/ReorderArray.d \
./src/Class1/SelectionSort.d 


# Each subdirectory must supply rules for building sources it contributes
src/Class1/%.o: ../src/Class1/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


