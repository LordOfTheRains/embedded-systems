#include <stdio.h>
#include <stdlib.h>



void printBinary(unsigned int n);
void printChar(unsigned int n);
void printHex(unsigned int n);

int main(int argc, char *argv[])
{
    int input_n;
    if (argc != 2) {
        fprintf(stderr,"usage: module1 input# \n");
        exit(1);
    }
    input_n = atoi(argv[1]);
    if (input_n < 0 || input_n > 127) {
        fprintf(stderr,"usage: enter number 0-127 \n");
        exit(1);
    }
    printf("input: %d\nBin:", input_n);
	if (input_n > 0) {
		printBinary(input_n);
	}else{
        printf("0");
    }

    printChar(input_n);
    printHex(input_n);
    return 0;
}

void printBinary(unsigned int n){
    if (n > 0){
        printBinary(n >> 1);
        printf("%d", n & 1);
    }
}

void printChar(unsigned int n){
    char c = n;
    printf("\nChar: %c", c);
}

void printHex(unsigned int n){
    printf("\nHex: %2x\n", n);
}
