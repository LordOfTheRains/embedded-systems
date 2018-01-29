#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void printBinary(unsigned short	 n);


void selectBun(unsigned short *menu);
void selectBurger(unsigned short *menu);
void selectBurgerSize(unsigned short *menu);
void selectOnion(unsigned short *menu);
void selectKetchup(unsigned short *menu);
void selectMayo(unsigned short *menu);
void selectDrink(unsigned short *menu);

int main(int argc, char *argv[])
{
    unsigned short menu = 0;
    selectBun(&menu);
    selectBurger(&menu);
    selectBurgerSize(&menu);
    selectOnion(&menu);
    selectKetchup(&menu);
    selectMayo(&menu);
    selectDrink(&menu);
    printf ("\nYour menu is: %hu\n", menu);
    printBinary(menu);
    printf ("\nYour menu (hex) is: %2x\n", menu);
    return 0;
}

void selectBun(unsigned short *menu){
  int selection = 0;
  printf ("Please select a bun (1-simple bun, 2-double-deck, 3-simple bun with sesame, 4-double-deck with sesame): ");
  scanf ("%d", &selection);
  switch(selection) {
    case 1:
      *menu = *menu | 0b00;
      break;
    case 2:
      *menu = *menu | 0b01;
      break;
    case 3:
      *menu = *menu | 0b10;
      break;
    case 4:
      *menu = *menu | 0b11;
      break;
    default:
      printf("something is wrong about your bun\n" );
      break;
  }
}

void selectBurger(unsigned short *menu){
  int selection = 0;
  printf ("Please select number of burger 1-3: ");
  scanf ("%d", &selection);
  switch(selection) {
    case 1:
      *menu = *menu | 0b0100;
      break;
    case 2:
      *menu = *menu | 0b1000;
      break;
    case 3:
      *menu = *menu | 0b1100;
      break;
    default:
      printf("something is wrong about your burger choice\n" );
      break;
  }
}

void selectBurgerSize(unsigned short *menu){
  int selection = 0;
  printf ("Please select size of burger 0) 1/8 lb hamburger, 1) 1/4 lb hamburger: ");
  scanf ("%d", &selection);
  if (selection){
    *menu = *menu | 0b10000;
  }
}

void selectOnion(unsigned short *menu){
  int onion = 0;
  printf ("Onions? 1) yes, 0) no? :");
  scanf ("%d", &onion);
  if (onion){
    *menu = *menu | 0b100000;
  }
}

void selectKetchup(unsigned short *menu){
  int ketchup = 0;
  printf ("Ketchup? 1) yes, 0) no? :");
  scanf ("%d", &ketchup);
  if (ketchup){
    *menu = *menu | 0b1000000;
  }
}

void selectMayo(unsigned short *menu){
  int mayo = 0;
  printf ("Mayo? 1) yes, 0) no? :");
  scanf ("%d", &mayo);
  if (mayo){
    *menu = *menu | 0b10000000;
  }
}

void selectDrink(unsigned short *menu){
  int selection = 0;
  printf ("\nPlease select a drink: \n");
  printf ("1) Coca Cola. \n");
  printf ("2) Sprite. \n");
  printf ("3) Lemonade. \n");
  printf ("4) sweet tea. \n");
  printf ("5) unsweetened tea. \n");
  scanf ("%d", &selection);
  switch(selection) {
    case 1:
      *menu = *menu | 0b100000000;
      break;
    case 2:
      *menu = *menu | 0b1000000000;
      break;
    case 3:
      *menu = *menu | 0b1100000000;
      break;
    case 4:
      *menu = *menu | 0b10000000000;
      break;
    case 5:
      *menu = *menu | 0b10100000000;
      break;
    default:
      printf("something is wrong about your drink choice\n" );
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
