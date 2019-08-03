# Lab 7 - Inventory

In this workshop, we will continue our development of a text based game "Code Quest!". This workshop focuses on item inventory using parallel arrays.

### LEARNING OUTCOMES

Upon successful completion of this workshop, you will be able to 
- Code a program that uses parallel arrays
- Write code which searches and updates arrays

### SPECIFICATIONS

### PART 1:

Write a program which acts as an inventory system for Code Quest! This program stores a list of item IDs and item quantities. It features a series of utility functions for managing. This program requires the following four functions:

- `int Find_Item(int id[], int size, int item)`: This function performs a linear (naive) search over the inventory array. This function receives an integer array of item id's, an integer for the size of the array, and an integer for the desired item. This function searches through the array for the desired item and returns the index of the item if it is found, -1 if it is not found.

- `int Add_Item(int id[], int quantity[], int size, int item)`: This function adds an item to the inventory of the player. It recives an int array of item id's, an int array of item quantity's, an int for the size of the arrays, and an int for the item being added. This function searches through the id array to find if the item exists in the array (use `Find_Item` function above). If it finds the item, it increases the associated element in the quantity array by one. If it does not find the item, it searches the id array for an item in the array with an associated quantity of zero. If it finds one, it changes the id to the id of the item being added and sets the associated quantity to 1. If the item was able to be added (by replacing a successfully aaded), otherwise it returns 0 (inventory already full).

`int Use_Item(int id[], int quantity[], int size, int item)`: This function removes an item from the inventory. This function receives an int array for the item id, an int array for the item quantity, an int for the size of the array and an int for the item id of the item being used. This function searches the inventory for the desired item, if the item's quantity is greater than 0, it reduces the quantity by one and returns 1 (success), otherwise, it returns 0 (unable to find item with non-zero quantity).

`void Print_Item(int item)`: This function prints the item name associated with an item ID. It receives an int for an item id. This function simply prints the item name associated with the item id parameter. The associations are as follows:

0 - Potion, 1 - HP Booster, 2 - Strength Booster, 3 - Defense Booster, 4 - Intelligence Booster

This function assumes the item ID is valid.

### PART 2:

Once the above four functions are implemented, write a program that simulates a basic inventory system. The program creates two integer arrays for item `id's` and item `quantities`. The arrays should both be 3 elements in size and all values to be intialized to zero. Present the user with a menu with the following options:

1. Get New Item
2. Show Inventory
3. Use Item
4. Quit

The program loops until 4 is selected.

If 1 is selected, the program generates a random integer between 0 - 4 (including 0 and 4) and adds it to the inventory. Use `Add_Item` function above.

If 2 is selected, display the item ID, item name and quantity to the user. Please note that the code for this option is given below.

If 3 is selected, the user is prompted for an item id. The program then reduces the quantity of that item in the inventory if it exists. Use `Use_Item` function above.

```
// code for option 2:

int;
for (i = 0; i < 3; i++)
{
  printf("%d. ", id[i]);
  Print_Item(id[i]); // Use the function explained above
  printf("%d\n", quantity[i]);
}
```

**Sample Output:**

The output of a typical run-through of your program should look like this (user input highlighted in bold). Items are randomly generated thus outputs will not match exactly:

```
1. Get New Item
2. Show Inventory
3. Use Item
4. Quit

Select Option: <b>1</b>

New Item Added!

1. Get New Item
2. Show Inventory
3. Use Item
4. Quit

Select Option: <b>1</b>

New item Added!

1. Get New Item
2. Show Inventory
3. Use Item
4. Quit

Select Option: <b>1</b>

New item Added!

1. Get New Item
2. Show Inventory
3. Use Item
4. Quit

Select Option: <b>1</b>

New item Added!

1. Get New Item
2. Show Inventory
3. Use Item
4. Quit

Select Option: <b>1</b>

Inventory is already full!

1. Get New Item
2. Show Inventory
3. Use Item
4. Quit

Select Option: <b>2</b>

0. Potion X2
4. Intelligence Booster X1
2. Strength Booster X1

1. Get New Item
2. Show Inventory
3. Use Item
4. Quit

Select Option: <b>3</b>
Select item: <b>1</b>
You don't have that item!

1. Get New Item
2. Show Inventory
3. Use Item
4. Quit

Select Option: <b>3</b>
Select item: <b>0</b>
Item used!

1. Get New Item
2. Show Inventory
3. Use Item
4. Quit

Select Option: <b>3</b>
Select item: <b>4</b>
Item used!

1. Get New Item
2. Show Inventory
3. Use Item
4. Quit

Select Option: <b>2</b>

0. Potion X1
2. Strength Booster X1

1. Get New Item
2. Show Inventory
3. Use Item
4. Quit

Select Option: <b>4</b>
</pre>
