CC=gcc -g -std=c99
INC_DIR = ./
CFLAGS=-c -Wall -I$(INC_DIR)
DEPS = $(DEPS)*.h

all: exercise31 exercise32

exercise31: exercise31.o
	$(CC) exercise31.o  -o exercise31

exercise31.o:  exercise31.c
	$(CC) $(CFLAGS) exercise31.c

exercise32: exercise32.o
	$(CC) exercise32.o  -o exercise32

exercise32.o:  exercise32.c
	$(CC) $(CFLAGS) exercise32.c



clean:
	    rm -rf *.o exercise31 exercise32
