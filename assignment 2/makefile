CC=gcc -g -std=c99
INC_DIR = ./
CFLAGS=-c -Wall -I$(INC_DIR)
DEPS = $(DEPS)*.h

all: module2

#	UDPServerDisplay.o ServerUDP.o

module2: module2.o
	$(CC) module2.o  -o module2

module2.o:  module2.c
	$(CC) $(CFLAGS) module2.c

clean:
	    rm -rf *.o module2
