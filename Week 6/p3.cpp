//Write a C++ Program to print the address of the Variable Using a Pointer.
#include <iostream>
using namespace std;
int main(){
    int var;
    cout << "Enter integer: ";
    cin >> var;
    int *address = &var;
    cout << "Address of int variable: " << address;
    return 0;
}