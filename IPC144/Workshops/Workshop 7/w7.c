// Name: Natalia Monsalve
// w7.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 3

int find_item(int id[], int size, int item);
int add_item(int id[], int quantity[], int size, int item);
int use_item(int id[], int quantity[], int size, int item);
void print_item(int item);

int main(void)
{
  int id[SIZE];
  int quantity[SIZE];
  int input = 0;
  int i;
  int low = 0;
  int high = 4;
  int item = 0;
  int item_input = 0;
  int ret_use_item = 0;
  
  for (i = 0; i < SIZE; i++) id[i] = 0;
  for (i = 0; i < SIZE; i++) quantity[i] = 0;
  
  do {
    printf("1. Get New Item\n");
    printf("2. Show Inventory\n");
    printf("3. Use Item\n");
    printf("4. Quit\n\n");
    
    printf("Select Option: ");
    scanf("%d", &input);
    printf("\n");
    
    if (input == 1) {
      printf("New Item Added!\n\n");
      srand(time(NULL));
      item = rand() % (high + 1);
      
      add_item(id, quantity, SIZE, item);
    }
    else if (input == 2) {
      for (i = 0; i < 3; i++) {
        printf("%d. ", id[i]);
        print_item(id[i]);
        printf("%d\n", quantity[i]);
      }
      printf("\n");
    }
    else if (input == 3) {
      printf("Select item: ");
      scanf("%d", &item_input);
      ret_use_item = use_item(id, quantity, SIZE, item_input);
      if (ret_use_item == 1) {
        printf("Item used!\n\n");
      }
      else {
        printf("You don't have that item!\n\n");
      }
    }
  } while (input != 4);
    return 0;
}

int find_item(int id[], int size, int item) 
{
  int ret = -1;
  int i;
  
  for (i = 0; i < size; i++) {
    if (id[i] == item) {
      ret = i;
    }
  }
  return ret;
}

int add_item(int id[], int quantity[], int size, int item)
{
  int index_or_notFound = 0;
  int stop = 0;
  int i = 0;
  
  index_or_notFound = find_item(id, size, item);
  
  if (index_or_notFound != -1) {
    quantity[index_or_notFound] += 1;
    return 1;
  }
  else if (index_or_notFound == -1) {
    for (i = 0; i < size && stop == 0; i++) {
      if (quantity[i] == 0) {
        id[i] = item;
        quantity[i] = 1;
        stop = 1;
        return 1;
      }
    }
    for (i = 0; i < size; i++) {
      if (quantity[i] != 0) {
        printf("Inventory is already full!\n\n");
        return 0;
      }
    }
  }
}

int use_item(int id[], int quantity[], int size, int item) 
{
  int i;
  for (i = 0; i < size; i++) {
    if (id[i] == item) {
      if (quantity[i] > 0) {
        quantity[i] -= 1;
        return 1;
      }
      else {
        return 0;
      }
    }
  }
}

void print_item(int item) 
{
  if (item == 0) {
    printf("Potion X");
  }
  else if (item == 1) {
    printf("HP Booster X");
  }
  else if (item == 2) {
    printf("Strength Booster X"); 
  }
  else if (item == 3) {
    printf("Defense Booster X");
  }
  else if (item == 4) {
    printf("Intelligence Booster X");
  }
}
