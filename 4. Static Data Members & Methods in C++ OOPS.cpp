// This program demonstrates the concept of Static Data Members and Static Methods in C++ OOPS.
// Static data members are shared among all objects of a class, and they retain a single copy across objects.
// Static methods can access only static data members and do not require an object to be invoked.

#include <iostream>
using namespace std;

class Employee
{
    int id;                  // Instance variable to store the employee's id
    static int count;        // Static data member to keep track of the number of employees

public:
    // Method to set the employee ID and increment the static count
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++; // Incrementing the static count variable
    }

    // Method to display the employee's ID and their position in the employee count
    void getData(void)
    {
        cout << "The id of this employee is: " << id 
             << " and this is employee number: " << count << endl;
    }

    // Static method to display the value of the static count variable
    static void getCount(void)
    {
        cout << "The value of count is: " << count << endl;
    }
};

// Defining and initializing the static data member outside the class
int Employee::count; // Default value is 0

int main()
{
    // Creating objects of the Employee class
    Employee mohit, kumhar, prajapat;

    // Setting and displaying data for the first employee
    mohit.setData();
    mohit.getData();
    Employee::getCount(); // Calling the static method using the class name

    // Setting and displaying data for the second employee
    kumhar.setData();
    kumhar.getData();
    Employee::getCount(); // Calling the static method again

    // Setting and displaying data for the third employee
    prajapat.setData();
    prajapat.getData();
    Employee::getCount(); // Calling the static method again

    return 0;
}
