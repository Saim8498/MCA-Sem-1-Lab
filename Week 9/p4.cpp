#include <iostream>
using namespace std;

// Call by value
void swap_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping (Call by Value): " << a << " " << b << endl;
}

// Call by reference
void swap_reference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping (Call by Reference): " << a << " " << b << endl;
}

int main() {
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n1. Call by Value";
    cout << "\n2. Call by Reference";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            swap_value(a, b);
            cout << "Original numbers: " << a << " " << b;
            break;

        case 2:
            swap_reference(a, b);
            cout << "Original numbers: " << a << " " << b;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
