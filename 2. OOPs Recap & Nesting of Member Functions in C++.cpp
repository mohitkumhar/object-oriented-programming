// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } mohit, rohan, lovish; */
// mohit.salary = 8 makes no sense if salary is private

// Nesting of member functions



// - X - X - X - X - X -

// This program demonstrates the concept of nesting of member functions in C++ OOPS.
// In this example, a private member function is called (nested) inside a public member function of the same class.
// The program also provides a quick recap of OOP principles such as encapsulation, private/public members, and class methods.

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s; // Binary number as a string
    void chk_bin(void); // Private function to check if the input is a valid binary number

public:
    void read(void);          // Public function to read a binary number
    void ones_compliment(void); // Public function to find the one's complement of the binary number
    void display(void);        // Public function to display the binary number
};

// Function to read a binary number
void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

// Private function to check if the input string is a valid binary number
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0); // Exit the program if the input is not binary
        }
    }
}

// Function to find the one's complement of the binary number
void binary::ones_compliment(void)
{
    chk_bin(); // Nested call to the private function to validate the binary number
    for (int i = 0; i < s.length(); i++)
    {
        // Flip each bit: '0' becomes '1' and '1' becomes '0'
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

// Function to display the binary number
void binary::display(void)
{
    cout << "Displaying your binary number: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b; // Create an object of the class `binary`
    
    b.read();       // Read a binary number
    b.display();    // Display the entered binary number
    
    b.ones_compliment(); // Calculate the one's complement
    b.display();         // Display the one's complement
    
    return 0;
}
