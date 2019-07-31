// Name: Natalia Monsalve
// w3.c

#include <stdio.h>

int main(void)
{
  float playerStrength = 10;
  float playerDefense = 20;
  float playerIntelligence = 40;
  float playerHP = 10;
  
  float enemyStrength = 30;
  float enemyDefense = 40;
  float enemyIntelligence = 25;
  float enemyHP = 10;
  
  int move;
  
  float attackPower, magicPower;
  
  printf("Battle Start\n");
  printf("Your HP: %.0f Enemy HP: %.0f\n", playerHP, enemyHP);
  
  while (playerHP > 0 && enemyHP > 0) {
    printf("1 - Attack\n");
    printf("2 - Magic\n");
    printf("Select your move: ");
    scanf("%d", &move);
    
    if (move == 1) {
      printf("You attacked the enemy!\n");
      
      attackPower = (playerStrength / enemyDefense) * 5;
      enemyHP = enemyHP - attackPower;
      
      if (enemyHP <= 0) {
        printf("You Won!\n");
      }
      else if (enemyHP > 0) {
        printf("The enemy attacked you!\n");
        
        attackPower = (enemyStrength / playerDefense) * 5;
        playerHP = playerHP - attackPower;
        
        if (playerHP <= 0) {
          printf("You died!\n");
        }
        else
          printf("Your HP: %d Enemy HP: %d\n", (int)playerHP, (int)enemyHP);
      }
    }
    else if (move == 2) {
      printf("You shocked the enemy!\n");
      
      magicPower = (playerIntelligence / enemyIntelligence) * 5;
      enemyHP = enemyHP - magicPower;
      
      if (enemyHP <= 0) {
        printf("You Won\n");
      }
      else if (enemyHP > 0) {
        printf("The enemy attacked you!\n");
        
        attackPower = (enemyStrength / playerDefense) * 5;
        playerHP = playerHP - attackPower;
        
        if (playerHP <= 0) {
          printf("You died!\n");
        }
        else 
          printf("Your HP: %d Enemy HP: %d\n", (int)playerHP, (int)enemyHP);
      }
    }
  }
  return 0;
}
