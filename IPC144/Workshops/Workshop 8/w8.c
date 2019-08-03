// Name: Natalia Monsalve
// w8.c

#include <stdio.h>
#define ARRAY_SIZE 2

struct Player {
  int Level;
  int Strength;
  int Speed;
  int Defense;
  int Intelligence;
  int Luck;
  int MaxHP;
  int CurrentHP;
  char Name[15];
};

struct Item {
  int ItemType;
  int ItemPower;
  char ItemName[15];
};

struct Item loadItem();
struct Player loadPlayer();
void printData(struct Player p1, struct Item itemList[], int listSize);

int main()
{
  int i;
  
  struct Player single_player;
  struct Item array[ARRAY_SIZE];
  
  single_player = loadPlayer();
  
  for (i = 0; i < ARRAY_SIZE; i++) {
    array[i] = loadItem();
  }
  
  printData(single_player, array, ARRAY_SIZE);
  
  return 0;
}

struct Item loadItem() {
  struct Item array;
  
  printf("Please enter the following Item info:\n");
  printf("Name: ");
  scanf("%s", array.ItemName);
  printf("Type: ");
  scanf("%d", &array.ItemType);
  printf("Power: ");
  scanf("%d", &array.ItemPower);
  printf("\n");
  
  return array;
}

struct Player loadPlayer()
{
  struct Player single_player;
  
  printf("Please enter the following player infor:\n");
  printf("Name: ");
  scanf("%s", single_player.Name);
  printf("Level: ");
  scanf("%d", &single_player.Level);
  printf("Strength: ");
  scanf("%d", &single_player.Strength);
  printf("Speed: ");
  scanf("%d", &single_player.Speed);
  printf("Defense: ");
  scanf("%d", &single_player.Defense);
  printf("Intelligence: ");
  scanf("%d", &single_player.Intelligence);
  printf("Luck: ");
  scanf("%d", &single_player.Luck);
  printf("Max HP: ");
  scanf("%d", &single_player.MaxHP);
  printf("\n");
  
  return single_player;
}

void printData(struct Player p1, struct Item itemList[], int listSize)
{
  int i;
  
  printf("Collected Input:\n\n");
  printf("Name\tLvl\tStr\tSpd\tDef\tInt\tLck\tMHP\n");
  printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n\n", p1.Name, p1.Level, p1.Strength, p1.Speed, p1.Defense, p1.Intelligence, p1.Luck, p1.MaxHP);
  
  printf("Name\tType\tPower\n");
  
  for (i = 0; i < listSize; i++) {
    printf("%s\t%d\t%d\n", itemList[i].ItemName, itemList[i].ItemType, itemList[i].ItemPower);
  }
}
