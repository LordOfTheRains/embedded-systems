#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void printBinary(uint_16 n);
void printChar(unsigned int n);
void printHex(unsigned int n);
void printHexDigits(unsigned int n);
void clearNth(unsigned int n, unsigned int bitNum);

int main(int argc, char *argv[])
{
    uint16_t LSB_MASK = 0x0f;
    uint16_t input_n, input_nbit;

    if (argc != 3) {
        fprintf(stderr,"usage: module2 <input1 #>  <input2 #> \n");
        exit(1);
    }
    input_n = atoi(argv[1]);
    input_nbit = atoi(argv[2]);
    if (input_n < 0 || input_n > 65535) {
        fprintf(stderr,"usage: enter input 1 0-65535 \n");
        exit(1);
    }

    if (input_nbit < 0 || input_nbit > 15) {
        fprintf(stderr,"usage: enter input 2 0-15 \n");
        exit(1);
    }

    printf("input: %d\n", input_n);
    printf("input_nbit: %d\n", input_nbit);
    //n
    printf("\nn in binary: ");
    if (input_n > 0) {
       printBinary(input_n);
    }else{
      printf("0");
    }
    printHex(input_n);

    //~n
    printf("\n~n in binary: ");
    if (input_n > 0) {
       printBinary(~input_n);
    }else{
      printf("1");
    }
    printHex(~input_n);


    printf("\n4 LSB: ");
    if (input_n > 0) {
       printBinary(input_n &LSB_MASK);
    }else{
      printf("0");
    }

    printf("\nCustomized Hex: ");
    printHexDigits(input_n);

    printf("\nclear %d th bit: ",input_nbit);
    clearNth(input_n, input_nbit);
    printf("\n\n");
    return 0;
}

void printBinary(uint_16 n){
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

void printHexDigits(unsigned int n){
    printf("\n%x-", (n&0b11110000)>>4);
    printf("%x\n", n&0x0f);
}

void clearNth(unsigned int n, unsigned int bitNum){
    uint16_t mask= 0x01<<bitNum;
    printBinary(n &~mask);
}
