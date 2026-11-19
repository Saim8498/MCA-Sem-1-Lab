#include <iostream>
#include <string>
using namespace std;

void instr(string &str, string sub, int pos){
    str.insert(pos, sub);
}

void delstr(string &str, int pos, int n){
    str.erase(pos, n);
}

int main(){
    string str, sub;
    int choice, pos, n;

    cout << "Enter the main string: ";
    cin>>str;

    cout << "\n1. Insert a substring";
    cout << "\n2. Delete characters";
    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1){
        cout << "Enter substring: ";
        cin >> sub;

        cout << "Enter position: ";
        cin >> pos;

        instr(str, sub, pos);

        cout << "String after insertion: " << str;
    }
    else if (choice == 2){
        cout << "Enter starting position: ";
        cin >> pos;

        cout << "Enter number of characters to delete: ";
        cin >> n;

        delstr(str, pos, n);

        cout << "String after deletion: " << str;
    }
    else{
        cout << "Invalid choice!";
    }

    return 0;
}