### Milestone 2

In this milestone, you are to write seven functions and a main program to allow the user select from a menu and perform the respective action.

a) Write the following function to display an inventory. This function takes an integer array of SKU numbers, and a float array of `price`. The function displays an informative output. See "Program Completion" section for the format of the output.

`void displayInventory(const int sku[], const float price[]);`

b) This function performs a linear (naive) search over the inventory array. This function receives an integer array SKU numbers, and an integer for the desired item. This function searches through the array for the desired item and returns the index of the item if it is found, -1 if it is not found.

`int searchInventory(const int sku[], const int item);`

c) Write the following function to check the price for an item. This function prompts the user to input the SKU number for the item they are looking for. Then, this functions searches through the inventory and displays the cost of the item. Note that if the item does not exist in the inventory, the program displays an informative message.

`void checkPrice(const int sku[], const float price[]);`

d) Write the following four functions that simply display a "Not implemented" message. These functions will be implemented in MS3.

`void displayCart();`
`void addCart();`
`void removeCart();`
`void checkout();`

e) Extend your main function from MS1 to
- define two parallel arrays of size `MAX_INVENTORY_SIZE`
  - sku: initialize the array with `{2358, 7654, 1209, 1345}`
  - price: initialize the array with `{12.60, 34.99, 5.70, 12.50}`
- call the appropriate function based on user's input: "1- displayInventory", "2- checkPrice", "3- displayCart", "4- addCart", "5- removeCart", "6- checkout", "7- clear", "8- display a goodbye message"

### Program Completion

Your program is complete if your output matches the following output (bold numbers show the user's input):

<pre>
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
Select: <b>1</b>

Inventory
============================================
Sku       Price
2358      12.60
7654      34.99
1209       5.70      
1345      12.50
============================================

Please select from the following options:
1) Display the inventory.
2) Price check.
3) Display my shopping cart.
4) Add to cart.
5) Remove from cart.
6) Check out.
7) Clear screen.
8) Exit.
Select: <b>2</b>
Please input the sku number of the item:
<b>7655</b>
Item does not exist in the shop! Please try again.

Please select from the following options:
1) Display the inventory.
2) Price check.
3) Display my shopping cart.
4) Add to cart.
5) Remove from cart.
6) Check out.
7) Clear screen.
8) Exit.
Select: <b>2</b>
Please input the sku number of the item:
<b>2358</b>
Item 2358 costs $ 12.60.

Please select from the following options:
1) Display the inventory.
2) Price check.
3) Display my shopping cart.
4) Add to cart.
5) Remove from cart.
6) Check out.
7) Clear screen.
8) Exit.
Select: <b>3</b>
Not implemented

Please select from the following options:
1) Display the inventory.
2) Price check.
3) Display my shopping cart.
4) Add to cart.
5) Remove from cart.
6) Check out.
7) Clear screen.
8) Exit.
Select: <b>8</b>
Goodbye!
</pre>
