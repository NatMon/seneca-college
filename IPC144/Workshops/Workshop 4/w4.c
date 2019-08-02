// Name: Natalia Monsalve
// w4.c

#include <stdio.h>

void clearScreen();
int validate(int low, int high);
void newGame();
void load();

int main(void) 
{
  int input;
  
  void clearScreen();
  
  printf("--Main Menu--\n\n");
  
  printf("1 - New Game\n");
  printf("2 - Load Game\n");
  printf("3 - Exit\n\n");
  
  validate(1, 3);
  
  return 0;
}

void clearScreen()
{
  int i;
  for (i = 0; i <= 40; i++) {
    printf("\n");
  }
}

int validate(int low, int high) 
{
  int input;
  printf("Select: ");
  
  do {
    scanf("%d", &input);
    if (input == low) {
      newGame();
    }
    else if (input > low && input < high) {
      load();
    }
    else if (input == high) {
      printf("Good Bye!");
    }
    else {
      printf("Invalid input, try again: ");
    }
  } while (input < low || input > high);
  return input;
}

void newGame() {
  printf("Not Implemented!");
}
  
void load() {
  printf("Not Implemented!");
}

 
  
