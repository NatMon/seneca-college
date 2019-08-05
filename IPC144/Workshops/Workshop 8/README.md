# Lab 8 - Structures

In this workshop, we will continue our development of a text based game "Code Quest!". This workshop focuses on enhancing the game by adding strings for player and item names.

### LEARNING OUTCOMES

Upon successful completion of this workshop, you will be able to
- design a structure type
- access the members of an object of structure type
- pass an object of structure type to a function

### SPECIFICATIONS

Write the following two structs which will contain the required information for _**items**_ and **_players_**. In addition, write the following three functions which will make use of these structs:

`Struct Player`: This struct contains all the required data to represent a player's character. These components are: Level, Strength, Speed, Defense, Intelligence, Luck, Max HP, Current HP (all integers) and Name (string).

`Struct Item`: This struct contains all the required data to represent an inventory item. These components are: Item name (string), item type (int representing the effect of the item), item power (int representing the amount of change the item will produce).

`struct Item loadItem()`: This function defines a variable of type `Item`. The function, prompts the user for an item name, item type and item power, storing the values in the variable of type `Item` and returning it.

`struct Player loadPlayer()`: This function defines a variable of type `Player`. The function, prompts the user for all required attributes of the defined variable (Level, Strength, Speed, Defense, Intelligence, Luck, Max HP, Current HP, and Name). This function then fills the defined variable with the input and returns the struct.

`void printData(struct Player p1, struct Item itemList[], int listSize)`: This function takes a variable of type `struct Player p1`, an array of `struct Item itemList[]`, and an integer `listSize` representing the number of items in `itemList`. This function displays all information for `p1` and all information for the list of items `itemList`. Check the output below for formatting.

Once the above code has been implemented, write a program that allows simple tests of the code. This program should allocate space for a single player `struct Player` and an array of size 2 of `struct Item`.

First, the `loadPlayer()` function is called to receive information for the player, the returned value is stored in the local `Player` struct.

Then, the `loadItem()` function is called twice, storing each returned value in a different part of the item array.

Finally, the `printData` function is called to display the information that was collected.

THE output of a typical run-through of your program should look like this (user input highlighted in bold):

<pre>
Please enter the following player info:
 Name:
 Level:
 Strength:
 Speed:
 Defense:
 Intelligence:
 Luck:
 Max HP:
 
Please enter the following Item info:
 Name:
 Type:
 Power:
 
Please enter the following Item info:
 Name:
 Type:
 Power:
 
Collected Input:
 
Name    Lvl   Str   Spd   Def   Int   Lck   MHP 
Ariel   2     20    10    10    30    10    100

Name    Type    Power
Potion  3       10
Elixer  4       5
</pre>
