// This program demonstrates the concept of C++ object memory allocation and the use of arrays in classes.
// It illustrates how arrays can be used as member variables within a class to store multiple values (like item IDs and prices),
// and how memory is allocated for the objects and arrays dynamically during program execution.

#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];     // Array to store item IDs
    int itemPrice[100];  // Array to store item prices
    int counter;         // Counter to keep track of the number of items entered

public:
    void initCounter(void) // Initializes the counter to 0
    {
        counter = 0;
    }

    void setPrice(void);    // Function to set the price and ID for items
    void displayPrice(void); // Function to display all item IDs and their corresponding prices
};

// Function to set the price and ID for an item
void Shop::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];  // Taking input for item ID

    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];  // Taking input for item price

    counter++;  // Increment the counter to move to the next item
}

// Function to display all item IDs and their corresponding prices
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++) // Loop through all items entered
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan; // Create an object of the class `Shop`
    dukaan.initCounter(); // Initialize the item counter to 0

    dukaan.setPrice(); // Set price for the first item
    dukaan.setPrice(); // Set price for the second item
    dukaan.setPrice(); // Set price for the third item

    dukaan.displayPrice(); // Display all entered items' IDs and prices
    
    return 0;
}
