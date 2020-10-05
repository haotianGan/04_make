all: main.o euler.o
	gcc -o Program.exe main.o euler.o

main.o: main.c euler.h
	gcc -c main.c 

euler.o: euler.c
	gcc -c euler.c
