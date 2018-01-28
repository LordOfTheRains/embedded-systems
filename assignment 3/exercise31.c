#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void printBun(unsigned short	 bun_type);
void printBinary(unsigned short	 n);
void printBurger(unsigned short burgers);
void printBurgerSize(unsigned short size);
void printOnion(unsigned short onion);
void printKetchup(unsigned short ketchup);
void printMayo(unsigned short mayo);
void printDrink(unsigned short drink);

int main(int argc, char *argv[])
{
    unsigned short menu;
    unsigned short BUN = 0b11;
    unsigned short BURGER = 0b1100;
    unsigned short SIZE = 0b10000;
    unsigned short ONION = 0b100000;
    unsigned short KETCHUP = 0b1000000;
    unsigned short MAYO = 0b10000000;
    unsigned short DRINKS = 0b11100000000;
    printf ("Enter your menu: ");
    scanf ("%hu", &menu);
    printf ("You entered: %hu\n", menu);
    printBun(menu & BUN);
    printBurger((menu & BURGER) >> 2);
    printBurgerSize((menu & SIZE) >> 4);
    printOnion((menu & ONION) >> 5);
    printKetchup((menu & KETCHUP) >> 6);
    printMayo((menu & MAYO) >> 7);
    printDrink((menu & DRINKS) >> 8);
    return 0;
}

void printBun(unsigned short bun_type){
  switch(bun_type) {
    case 0:
      printf("simple bun, ");
      break;
    case 1:
      printf("double-deck bun, ");
      break;
    case 2:
      printf("simple bun with sesame, ");
      break;
    case 3:
      printf("double-deck bun with sesame, ");
      break;
    default:
      printf("something is wrong about your bun\n" );
      break;
  }
}

void printBurger(unsigned short burgers){
  switch(burgers) {
    case 1:
      printf(" single ");
      break;
    case 2:
      printf(" double ");
      break;
    case 3:
      printf(" triple ");
      break;
    default:
      printf("something is wrong about your burger choices\n" );
      break;
  }
}

void printBurgerSize(unsigned short size){
  switch(size) {
    case 0:
      printf("1/8 lb hamburger, ");
      break;
    case 1:
      printf("1/4 lb hamburger, ");
      break;
    default:
      printf("something is wrong about your burger size\n" );
      break;
  }
}

void printOnion(unsigned short onion){
  if (onion){
    printf("onions, ");
  }else{
    printf("no onions, ");
  }
}

void printKetchup(unsigned short ketchup){
  if (ketchup){
    printf("ketchup, ");
  }else{
    printf("no ketchup, ");
  }
}

void printMayo(unsigned short mayo){
  if (mayo){
    printf("mayo, ");
  }else{
    printf("no mayo, ");
  }
}

void printDrink(unsigned short drink){
  switch(drink) {
    case 0:
      printf("Coca Cola.");
      break;
    case 1:
      printf("Sprite.");
      break;
    case 2:
      printf("Lemonade.");
      break;
    case 4:
      printf("sweet tea.");
      break;
    case 5:
      printf("unsweetened tea.");
      break;
    default:
      printf("something is wrong about your drink\n" );
      break;
  }
}


void printBinary(unsigned short n){
    if (n > 0){
        printBinary(n >> 1);
        printf("%d", n & 1);
    }else{
      printf("0");
    }
}
