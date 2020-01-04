CC=gcc
CFLAGS=-Wall -I

mem-alloc: client.o getPointerSize.o randPop.o printNums.o
	$(CC) -o mem-alloc client.o getPointerSize.o randPop.o printNums.o

client.o: client.c defs.h
	$(CC) -c client.c

getPointerSize.o: getPointersize.c
	$(CC) -c getPointerSize.c

randPop.o: randPop.c
	$(CC) -c randPop.c

printNums.o: printNums.c
	$(CC) -c printNums.c
