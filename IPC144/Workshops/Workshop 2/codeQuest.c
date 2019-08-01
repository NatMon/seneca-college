// Name: Natalia Monsalve
// codeQuest.c

#include <stdio.h>

int main(void)
{
  printf("+-----------------------+\n");
  printf("|                       |\n");
  printf("|      CODE QUEST       |\n");
  printf("|                       |\n");
  printf("+-----------------------+\n");
    
  float strength, speed, defense, intelligence = 0;
  int sum, luck = 0;
  float strengthRatio, speedRatio, defenseRatio, intelligenceRatio = 0;
  
  printf("Character Creation\n");
  printf("Please enter your desired stats for your character:\n\n");
  
  printf("Enter strength: ");
  scanf("%f", &strength);
  
  printf("Enter speed: ");
  scanf("%f", &speed);
  
  printf("Enter defense: ");
  scanf("%f", &defense);
  
  printf("Enter intelligence: ");
  scanf("%f", &intelligence);
  
  printf("\n");
  
  sum = strength + speed + defense + intelligence;
  
  strengthRatio = strength / sum * 100;
  speedRatio = speed / sum * 100;
  defenseRatio = defense / sum * 100;
  intelligenceRatio = intelligence / sum * 100;
  
  printf("Your player's final states are:\n\n");
  
  printf("Strength: %d\n", (int)strengthRatio);
  printf("Speed: %d\n", (int)speedRatio);
  printf("Defense: %d\n", (int)defenseRatio);
  printf("Intelligence: %d\n", (int)intelligenceRatio);
  
  luck = sum % 30;
  
  printf("Luck: %d\n", luck);
  
  return 0;
}
