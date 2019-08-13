# Grocery Store Application

### Problem Description

Your job for this project is to write an application that manages shopping.

Application Features:
- Customers are able to view an inventory of items
- Customers are able to buy items
- Customers are able to quickly search and get item details
- Your application interacts with the customer
- Your application adds/removes items to a shopping cart
- Your application calculates the total cost

### Design Requirements

1. You must use `const` or `#define` directives to declare constants. Here is a sample list of constants:
  MAX_INVENTORY_SIZE = 4
  TAX .13
2. You are allowed to ce additional functions
3. You must document (i.e. comments and indentation) your code properly
4. You must put the following statement (as a comment) at the beginning of your source code:
```
I declare that the attached assignment is wholly my own work in accordance with Seneca Academic Policy. No part of this assignment has been copied manually or electronically from any other source (including web sites) or distributed to other students.

Name _____________________________________    Student ID ______________________
```
5. You must use blank lines to separate logical units in the source code
6. You are not allowed to declare global variables

## Milestone 1

In this milestone, you are to write three functions and a main program to create a menu and input user's selection.

a) Write the following function to display a menu:

void menu();
/*
This function takes no arguments and displays the following menu to the user.
Please select from the following options:
1) Display the inventory.
2) Price check.
3) Display my shopping cart.
4) Add to cart.
5) Remove from cart.
6) Check out.
7) Clear screen.
8) Exit.
*/

b) Write the following function that prompts the user to input an integer. This function verifies that the integer is within a specified range (`low` and `high`), if not, the function displays a warning and prompts the user again. This function requires two parameters (low and high range) and returns the validated input from the user. You can assume the user will only enter numbers.

int validate(const int low, const int high);

c) Write the following clear screen function. This simple function prints out 40 newlines to clear the screen. It requires no parameters and returns nothing.

void clear();

d) Write the main function that
- calls `clear` function to clear the screen
- displays a welcome message
- calls the function `menu` to display a menu to the user
- calls the `validate` function to obtain the user's input. Note that the user's input must be within the range 1 and 8.
- The program only exits when the user selects Exit on the menu screen (looping required)

Your program is complete if your output matches the following output (bold numbers show the user's input):

```
Welcome to the Grocery Store
============================
Please select from the following options:
1) Display the inventory.
2) Price check.
3) Display my shopping cart.
4) Add to cart.
5) Remove from cart.
6) Check out.
7) Clear screen.
8) Exit.

Select: 34
Invalid input, try again: 0
Invalid input, try again: 90
Invalid input, try again: 8
```
