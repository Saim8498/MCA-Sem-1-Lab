
#include <iostream>
using namespace std;

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    float a, b;
    int choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n----- MENU -----";
    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Addition = " << add(a, b);
            break;

        case 2:
            cout << "Subtraction = " << subtract(a, b);
            break;

        case 3:
            cout << "Multiplication = " << multiply(a, b);
            break;

        case 4:
            if(b != 0)
                cout << "Division = " << divide(a, b);
            else
                cout << "Division by zero is not possible.";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

