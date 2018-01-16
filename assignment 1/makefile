CC=gcc -g -std=c99
INC_DIR = ./
CFLAGS=-c -Wall -I$(INC_DIR)
DEPS = $(DEPS)*.h

all: module1

#	UDPServerDisplay.o ServerUDP.o

module1: module1.o
	$(CC) module1.o  -o module1

module1.o:  module1.c
	$(CC) $(CFLAGS) module1.c

clean:
	    rm -rf *.o module1
