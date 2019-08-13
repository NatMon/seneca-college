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
  - This function prompts the user to enter the quantity
