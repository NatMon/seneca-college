// Name: Natalia Monsalve
// m1.c

/* I declare that the attached assignment is wholly my own work in accordance with Seneca Academic Policy. No part of this assignment has been copied manually or electronically from any other source (including web sites) or distributed to other students. */

#include <stdio.h>

void clear();
void menu();
int validate(const int low, const int high);

int main()
{
  const int low = 1;
  const int high = 8;
  int input = 0;
   
  clear();
  
  printf("Welcome to the Grocery Store\n");
  printf("============================\n");

  do {
    menu();
    input = validate(low, high);
  } while (input != 8);
  return 0;
}

void clear()
{
  int i;
  for (i = 0; i < 40; i++) {
    printf("\n");
  }
}

void menu()
{
  printf("Please select from the following options:\n");
  printf("1) Display the inventory.\n");
  printf("2) Price check.\n");
  printf("3) Display my shopping cart.\n");
  printf("4) Add to cart\n");
  printf("5) Remove from cart.\n");
  printf("6) Check out.\n");
  printf("7) Clear screen.\n");
  printf("8) Exit.\n");
}

int validate(const int low, const int high)
{
  int input = 0;
  printf("Select: ");
  do {
    scanf("%d", &input);
    if (input >=low && input <= high) {
      printf("\n");
    }
    if (input < low || input > high) {
      printf("Invalid input, try again: ");
    }
  } while (input < low || input > high);
  return input;
}
