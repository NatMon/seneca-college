// Name: Natalia Monsalve
// w5.c

#include <stdio.h>

void rest_at_inn(float* days_remaining, int* hp_remaining, int max);
void train(float* days_remaining, int* hp_remaining, int* experience);
void battle_demon_lord(int* current_hp);

int main(void)
{
  float daysRem = 8;
  int HP = 10;
  int maxHP = 10;
  int playerExp = 0;
  int input = 0;
  
  printf("Days remaining: %.1f HP: %d EXP: %d\n\n", daysRem, HP, playerExp);
  
  do {
    printf("1 - Rest at Inn\n");
    printf("2 - Train\n");
    printf("3 - Fight the Demon Lord\n");
    printf("4 - Quit Game\n\n");
    
    printf("Select: ");
    scanf("%d", &input);
    
    if (input == 1) {
      rest_at_inn(&daysRem, &HP, maxHP);
      printf("Days remaining: %.1f HP: %d EXP: %d\n\n", daysRem, HP, playerExp);
    }
    else if (input == 2) {
      train(&daysRem, &HP, &playerExp);
      printf("Days remaining: %.1f HP: %d EXP: %d\n\n", daysRem, HP, playerExp);
    }
    else if (input == 3) {
      battle_demon_lord(&HP);
    }
    else if (input == 4) {
      printf("\nGame Over!\n");
    }
  } while (input != 4 && HP > 0);
  return 0;
}

void rest_at_inn(float* days_remaining, int* hp_remaining, int max) 
{
  max = 10;
  int playerExp = 0;
  
  printf("You rested up at the inn\n\n");
  
  *hp_remaining = max;
  *days_remaining -= 1;
}

void train(float* days_remaining, int* hp_remaining, int* experience) 
{
  printf("You did some training!\n\n");
  
  *experience += 10;
  *hp_remaining -= 2;
  *days_remaining -= 0.5;
}

void battle_demon_lord(int* current_hp)
{
  *current_hp = 0;
  printf("He's too strong!\n");
  printf("\nGame Over!\n");
}
