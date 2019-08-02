// Name: Natalia Monsalve
// w2.c

#include <stdio.h>

int main(void)
{
  float playerStrength, playerSpeed, playerDefense, playerIntelligence = 0; 
  float strengthRatio, speedRatio, defenseRatio, intelligenceRatio = 0;
  int sum, luck = 0;
  
  printf("Character Creation\n");
  printf("Please enter your desired stats for your character:\n\n");
  
  printf("Enter strength: ");
  scanf("%f", &playerStrength);
  
  printf("Enter speed: ");
  scanf("%f", &playerSpeed);
  
  printf("Enter defense: ");
  scanf("%f", &playerDefense);
  
  printf("Enter intelligence: ");
  scanf("%f", &playerIntelligence);
  
  printf("\n");
  
  sum = playerStrength + playerSpeed + playerDefense + playerIntelligence;
  
  strengthRatio = playerStrength / sum * 100;
  speedRatio = playerSpeed / sum * 100;
  defenseRatio = playerDefense / sum * 100;
  intelligenceRatio = playerIntelligence / sum * 100;
  
  luck = sum % 30;
  
  printf("Your player's final states are:\n\n");
  
  printf("Strength: %d\n", (int)strengthRatio);
  printf("Speed: %d\n", (int)speedRatio);
  printf("Defense: %d\n", (int)defenseRatio);
  printf("Intelligence: %d\n", (int)intelligenceRatio);
  printf("Luck: %d\n", luck);
  
  return 0;
}
