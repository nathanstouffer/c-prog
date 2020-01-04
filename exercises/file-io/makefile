CC=gcc
CFLAGS=-Wall -I.

distance: main.o computeDist.o
	$(CC) -o distance main.o computeDist.o 

main.o: main.c defs.h
	$(CC) -c main.c

computeDist.o: computeDist.c
	$(CC) -c computeDist.c

clean :
	rm distance main.o computeDist.o
