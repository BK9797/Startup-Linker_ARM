#@copywright : Bishoy

CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s
INCS=-I .
LIBS=
SRC =
OBJ =
As =
AsOBJ =
project_name=


all: app.c uart.c startup.s
	arm-none-eabi-gcc -c -g -I . -mcpu=arm926ej-s startup.s -o startup.o
	arm-none-eabi-gcc -c -g -I . -mcpu=arm926ej-s uart.c -o uart.o
	arm-none-eabi-gcc -c -g -I . -mcpu=arm926ej-s startup.s -o startup.o
	@echo "Build is Done"


app.o: app.c
	arm-none-eabi-gcc -c -g -I . -mcpu=arm926ej-s $<  -o $@


uart.o: uart.c
	arm-none-eabi-gcc -c -g -I . -mcpu=arm926ej-s $< -o $@


startup.o: startup.s
	arm-none-eabi-gcc -c -g -I . -mcpu=arm926ej-s $< -o $@


bisho.elf: uart.c app.c startup.s 
	arm-none-eabi-ld -T linker_script.ld app.o uart.o startup.o -o bisho.elf


bisho.bin: bisho.elf
	arm-none-eabi-objcopy -O binary $<  $@


clean_all: 
	rm *.o *.elf *.bin	


clean: 
	rm *.elf *.bin