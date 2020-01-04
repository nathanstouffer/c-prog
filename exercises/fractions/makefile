CC=gcc
CFLAGS=-Wall -I.

fractions: client.o readFrac.o writeAns.o getOp.o reduce.o \
	add.o sub.o mult.o
	$(CC) -o fractions client.o readFrac.o getOp.o writeAns.o \
		reduce.o add.o sub.o mult.o

client.o: client.c decs.h
	$(CC) -c client.c

readFrac.o: readFrac.c
	$(CC) -c readFrac.c

writeAns.o: writeAns.c
	$(CC) -c writeAns.c

getOp.o: getOp.c
	$(CC) -c getOp.c

reduce.o: reduce.c
	$(CC) -c reduce.c

add.o: add.c
	$(CC) -c add.c

sub.o: sub.c
	$(CC) -c sub.c

mult.o: mult.c
	$(CC) -c mult.c
