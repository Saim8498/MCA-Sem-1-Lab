#include <iostream>
using namespace std;

int main(){
    int num1, num2, swap, *n1, *n2;
    
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;
    n1 = &num1;
    n2 = &num2;
    cout << "\nBefore swap: \n"
    << "Num1: " << num1 << " and Num2: " << num2 << "\n\n";

    swap = *n1;
    *n1 = *n2;
    *n2 = swap;

    cout << "After swap: \n"
    << "Num1: " << num1 << " and Num2: " << num2 << endl;

    return 0;
}