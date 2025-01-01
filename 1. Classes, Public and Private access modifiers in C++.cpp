// This program demonstrates the concept of access specifiers in C++ OOPS.
// Access specifiers (private, public, protected) control the access level of class members.
// In this example, private members can only be accessed within the class, while public members can be accessed outside the class.

#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c; // Private members: accessible only within the class

public:
    int d, e; // Public members: accessible outside the class

    // Declaration of the method to set private data members
    void setData(int a1, int b1, int c1); 

    // Method to display all member variables
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

// Definition of the method to set private data members
void Employee::setData(int a1, int b1, int c1)
{
    a = a1; // Assigning value to private member 'a'
    b = b1; // Assigning value to private member 'b'
    c = c1; // Assigning value to private member 'c'
}

int main()
{
    Employee mohit; // Creating an object of the Employee class

    // Setting values for public members
    mohit.d = 34;
    mohit.e = 89;

    // Setting values for private members using a public method
    mohit.setData(1, 2, 4);

    // Displaying all member values
    mohit.getData();

    return 0;
}
