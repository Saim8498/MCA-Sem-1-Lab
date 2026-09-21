//Write a C++ Program for Increment and Decrement an Integer Using a Pointer.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter integer: ";
    cin >> n;
    int *ptr = &n; //init pointer
    int ch;
    cout << "Increment(1) or Decrement(2): ";
    cin >> ch;
    if (ch == 1){
        (*ptr)++;
    }
    else if (ch == 2){
        (*ptr)--;
    }
    else {
        cout << "Invalid input";
    }
    cout << "New value: " << n;
    return 0;
}
