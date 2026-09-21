//Write a C++ Program to Print a String Using a Pointer.
#include <iostream>
using namespace std;

int main(){
    char a[100];
    cout << "Enter a string of 100 chars max: ";
    cin.getline(a, 100);   //takes the whole line as inp
    
    char *ptr = a;
    while (*ptr != '\0'){
        cout << *ptr;
        ptr++;
    }
    return 0;
}