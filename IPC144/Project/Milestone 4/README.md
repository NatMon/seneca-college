In this milestone, you are going to use a C file. You are to write two functions and modify the main program to read records of inventory items, analyze them and write the receipt to a file.

a) Write the following function:

`int readInventory(const char filename[], int sku[], float price[]);`

- This function receives the address of a C-style character string `filename`, representing the name of the input file, and addresses of two arrays sku and price. This function reads records of inventory items from the input file. A sample of a file record is shown below:

`2358,12.60`

The fields of the record are as follows:

`sku,price`

- This function opens the file for reading and storing
- This function reads inventory information from the file and stores it to the corresponding arrays
- This function returns 0 if the file is read successfully, -1 otherwise

b) Write the following function:

`void printReceipt(const char filename[], struct Cart* pShoppingCart);`

- This function receives the address of a C-style character string `filename`, and the address of a Cart object as input arguments
- This function prints the shopping cart as well as the total price to the file
- A sample run of the program creates **receipt.dat**. See **receipt.dat** attached to this milestone

c) 
- Modify the main program from MS3 by removing the initializations of `sku` and `price`
- Define two parallel arrays for `sku` and `price`. These arrays are of size `MAX_INVENTORY_SIZE`. Redefine `MAX_INVENTORY_SIZE` to be `10`.
- Call `read` function defined above to initialize the following two arrays (`sku` and `price`) with the values given in the file. Note that the first argument of the function is the file name **"inventory.dat"**. The file contains records of information for 10 items. If the file does not open properly, your program must exit displaying a proper error message.
- In the main function, call the `printReceipt` function right after checkout function to generate a receipt to a file. Note that the name of the file is **"receipt.dat"** that is passed as the first argument.

### Program Completion

Your program is complete if your output matches the following output (bold numbers show the user's input):

