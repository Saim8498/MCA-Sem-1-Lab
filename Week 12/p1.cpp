#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    float marks;

public:
    // Default Constructor
    Student()
    {
        rollNo = 101;
        marks = 85.5;
    }

    // Member function to display values
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;  // Constructor is called automatically

    s1.display();

    return 0;
}