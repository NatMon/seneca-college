// Name: Natalia Monsalve
// w6.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void seedRandom();
float getRandom(float low, float high);
void clearInputBuffer();

int main(void)
{
  float level = 0;
  int input = 0;
  int rc;
  char after;
  
  seedRandom();
  
  printf("Enemy Generator\n");
  
  do {
    level = getRandom(3, 20);
    
    printf("\n");
    printf(" Level\t\t- %.0f\n", level);
    printf(" HP\t\t- %.0f\n", getRandom(0.5, 2.0) * level);
    printf(" Strength\t- %.0f\n", getRandom(0.15, 0.5) * level * level);
    printf(" Speed\t\t- %.0f\n", getRandom(0.15, 0.5) * level * level);
    printf(" Defense\t- %.0f\n", getRandom(0.15, 0.5) * level * level);
    printf("Intelligence\t- %.0f\n\n", getRandom(0.15, 0.5) * level * level);
    
    printf(" Generate Another? ");
    do {
      input = 0;
      rc = scanf("%d%c", &input, &after);
      
      if (rc != 2) {
        printf(" Invalid Input1 ");
        clearInputBuffer();
      }
      else if (after != '\n') {
        printf(" Invalid Input2 ");
        clearInputBuffer();
      }
      else if (input < 1 || input > 2) {
        printf(" Invalid Input3 ");
      }
    } while (input != 1 && input != 2);
  } while (input == 1);
  return 0;
}

void seedRandom() 
{
  srand(time(NULL));
}

float getRandom(float low, float high)
{
  float result = 0;
  result = low + ((float)rand() / RAND_MAX * (high - low));
  return result;
}

void clearInputBuffer()
{
  while (getchar() != '\n')
    ;
}
