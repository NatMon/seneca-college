// Name: Natalia Monsalve
// m3.c

/* I declare that the attached assignment is wholly my own work in accordance with Seneca Academic Policy. No part of this assignment has been copied manually or electronically from any other source (including web sites) or distributed to other students. */

#include <stdio.h>
#define MAX_INVENTORY_SIZE 4
#define MAX_ITEMS 10

struct Cart {
  int sku[MAX_ITEMS];
  float price[MAX_ITEMS];
  int quantity[MAX_ITEMS];
  float totalCost;
  int size;
};

void clear();
void menu();
int validate(const int low, const int high);
void displayInventory(const int sku[], const float price[]);
int searchInventory(const int sku[], const int item);
void checkPrice(const int sku[], const float price[]);
void displayCart(const struct Cart* pShoppingCart);
void addCart(struct Cart* pShoppingCart, const int sku[], const float price[]);
void removeCart(struct Cart* pShoppingCart);
void checkout(struct Cart* pShoppingCart);

int main()
{
  const int low = 1;
  const int high = 8;
  int input = 0;
  int i;
  int sku[MAX_INVENTORY_SIZE] = {2358,7654,1209,1345};
  float price[MAX_INVENTORY_SIZE] = {12.60,34.99,5.70,12.50};
  struct Cart myCart;
  myCart.size = 0;

  clear();
  
  printf("Welcome to the Grocery Store\n");
  printf("============================\n");

  do {
    menu();
    
    input = validate(low, high);
    
    if (input == 1) {
      displayInventory(sku, price);
    }
    else if (input == 2) {
      checkPrice(sku, price);
    }
    else if (input == 3) {
      displayCart(&myCart);
    }
    else if (input == 4) {
      addCart(&myCart, sku, price);
    }
    else if (input == 5) {
      removeCart(&myCart);
    }
    else if (input == 6) {
      checkout(&myCart);
    }
    else if (input == 7) {
      clear();
    }
    else if (input == 8) {
      printf("Goodbye!\n");
    }
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
    
    if (input < low || input > high) {
      printf("Invalid input, try again: ");
    }
  } while (input < low || input > high);
  return input;
}

void displayInventory(const int sku[], const float price[])
{
  int i;
  
  printf("\n");
  printf("Inventory\n");
  printf("============================\n");
  printf("SKU\t\tPrice\n");
  
  for (i = 0; i < MAX_INVENTORY_SIZE; i++) {
    printf("%d\t", sku[i]);
    printf("%5.2f\n", price[i]);
  }
  printf("============================\n\n");
}

int searchInventory(const int sku[], const int item)
{
  int i;
  
  for (i = 0; i < MAX_INVENTORY_SIZE; i++) {
    if (sku[i] == item)
      return i;
  }
  return -1;
}

void checkPrice(const int sku[], const float price[])
{
  int input = 0;
  int i;
  int stop = 0;
  
  printf("Please input the SKU number of the item: ");
  scanf("%d", &input);
  
  for (i = 0; i < MAX_INVENTORY_SIZE && stop == 0; i++) {
    if (sku[i] == input) {
      printf("Item %d costs $%.2f.\n\n", sku[i], price[i]);
      stop = 1;
    }
  }
  if (i == MAX_INVENTORY_SIZE) {
    printf("Item does not exist in the shop! Please try again.\n\n");  
  }
}

void displayCart(const struct Cart* pShoppingCart)
{
  int i;
  printf("\n");
  printf("Shopping Cart\n");
  printf("============================\n");
  printf("SKU\t\tQuantity\tPrice\n");
  
  for (i = 0; i < pShoppingCart->size; i++) {
    if (pShoppingCart->quantity[i] > 0) {
      printf("%d\t%d\t\t\t%5.2f\n", pShoppingCart->sku[i], pShoppingCart->quantity[i], pShoppingCart->price[i]);  
    }
  }
  printf("============================\n\n");
}

void addCart(struct Cart* pShoppingCart, const int sku[], const float price[])
{
  int input = 0;
  int i;
  int quantity = 0;
  int index = -1;
  
  do {
    printf("Please input a SKU number: ");
    scanf("%d", &input);
    
    index = searchInventory(sku, input);
    
    if (index == -1) {
      printf("Item does not exist in the shop! Please try again.\n"); 
    }
    else {
      printf("Quantity: ");
      scanf("%d", &pShoppingCart->quantity[pShoppingCart->size]);
      
      pShoppingCart->price[pShoppingCart->size] = price[index];
      pShoppingCart->sku[pShoppingCart->size] = sku[index];
      pShoppingCart->size++;
      printf("The item is successfully added to the cart.\n\n");
    }
  } while (index == -1);
}

void removeCart(struct Cart* pShoppingCart)
{
  if (pShoppingCart->size == 0) {
    printf("The cart is already empty!\n\n");  
  }
  else {
    pShoppingCart->size = 0;
    printf("The cart is successfully removed!\n\n");
  }
}

void checkout(struct Cart* pShoppingCart)
{
  float beforeTaxes = 0;
  int i;
  
  for (i = 0; i < pShoppingCart->size; i++) {
    beforeTaxes = beforeTaxes + pShoppingCart->price[i] * pShoppingCart->quantity[i];  
  }
  pShoppingCart->totalCost = beforeTaxes;
  
  printf("\n");
  printf("The total price is sum = %.2f\n\n", pShoppingCart->totalCost);
}
