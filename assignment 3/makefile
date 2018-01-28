CC=gcc -g -std=c99
INC_DIR = ./
CFLAGS=-c -Wall -I$(INC_DIR)
DEPS = $(DEPS)*.h

all: exercise31

exercise31: exercise31.o
	$(CC) exercise31.o  -o exercise31

exercise31.o:  exercise31.c
	$(CC) $(CFLAGS) exercise31.c

clean:
	    rm -rf *.o exercise31
