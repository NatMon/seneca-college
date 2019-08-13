### Milestone 3

In this milestone, you are going to use a C structure, write four functions and extend the main program from Milestone 2. In Milestone 2, the main program uses two parallel arrays to represent inventory data (i.e. `sku` and `price`) of a grocery store.

In this milestone, the main program uses a **C structure** to represent a **shopping cart**. Whenever a customer wants to buy an item, one adds it to the shopping cart. One may also remove the shopping cart. The C structure contains information about the items that have been added to the shopping cart. Here is the C struct type that should be used in this milestone:

```
struct Cart {
  int sku[MAX_ITEMS];
  float price[MAX_ITEMS];
  int quantity[MAX_ITEMS];
  float totalCost;
  int size;
};
```

`sku[MAX_ITEMS]`: An array of the SKU numbers of the items that are added to the cart.
`price[MAX_ITEMS]`: An array of the prices of the items that are added to the cart.
`quantity[MAX_ITEMS]`: An array of the quantites of the items that are added to the cart.
`MAX_ITEMS`: The maximum number of shopping items that may be put into a shopping cart. Assume `MAX_ITEMS` is 10.
`totalCost`: Total cost of the items in the shopping cart.
`size`: Size of the shopping cart.

a) replace `void displayCart()` from MS2 with the following function:
`void displayCart(const strcut Cart* pShoppingCart);`

- This function receives an address to an object of `Cart`
- This function displays the shopping cart in an informative format. See sample output.
- This function must not display items that have quantity zero.

b) Replace `void addCart()` from MS2 with the following function:
`void addCart(struct Cart* pShoppingCart, const int sku[], const float price[]);`
- This function receives an address to an object of `Cart`, and two parallel arrays `sku` and `price` representing the inventory
- This function prompts the user to input the SKU number of an item that one wants to add to the shopping cart
- This function searches through the inventory (the `sku` array) to find if the item exists in the array (use `searchInventory` funtion from MS2)
- If the item is found in the inventory, do the following:
  - This function prompts the user to enter the quantity of the item that one wants to purchase
  - This function uses the pointer (\*pShoppingCart) to store the SKU number and quantity at the object of the striuct (in the main program)
  - This function also finds the price information and stores it at the structure. (Hint: use the value returned by the `searchInventory` function to access the price information). Or simply use the following code:
 `pShoppingCart->price[pShoppingCart->size]=price[index];`
 `// index is the value returned by the searchInventory function`
 - This function increments the size of the shopping cart
 - Finally, this function displays a message that the item is successfully added to the cart- If the item is not found in the inventory, do the following:
  - The function prompts the user again to input a valid SKU number
  
c) Replace `void removeCart()` from MS2 with the following function:
`void removeCart(struct Cart* pShoppingCart);`
- This function receives an address to an object of `Cart`
- This function checks if the shopping cart is of size zero
  - If the size of the shopping cart is zero, the function displays a message that the cart is already empty
  - If the size of the shopping cart is not zero, the function assigns zero to the size, and displays a message that the cart is successfully removed
  
d) Replace `void checkout()` from MS2 with the following function:
`void checkout(struct Cart* pShoppingCart);`

- The function receives an address to an object of `Cart`
- The function calculates the total cost of buying all the items in the shopping cart

e) Extend the main program from Milestone 2 such that the whole menu is fully operational

Note: Add the following variables in your main program:
`struct Cart myCart; // An object of Cart`
`myCart.size=0; // Number of items in myCart`

### Program Completion

Your program is complete if your output matches the following output (bold numbers show the user's inpu):

<pre>
Welcome to the Grocery Store
============================
Please select from the following options:
1) Display the inventory.
2) Price check.
3) Display my shopping cart.
4) Add to cart.
5) Remove the cart.
6) Check out.
7) Clear screen.
8) Exit.
Select: <b>1</b>

Inventory
============================================
Sku                   Price
2358                  12.60
7654                  34.99
1209                   5.70      
1345                  12.50
============================================


