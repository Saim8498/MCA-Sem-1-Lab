
#include <iostream>
using namespace std;

int main()
{
    int n, choice;

    cout << "Enter an integer number: ";
    cin >> n;

    cout << "\n----- CONVERSION MENU -----";
    cout << "\n1. Binary";
    cout << "\n2. Octal";
    cout << "\n3. Hexadecimal";
    cout << "\n4. All conversions";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Binary = ";
            for(int i = 31; i >= 0; i--)
                cout << ((n >> i) & 1);
            break;

        case 2:
            cout << "Octal = " << oct << n;
            break;

        case 3:
            cout << "Hexadecimal = " << hex << n;
            break;

        case 4:
            cout << "Binary = ";
            for(int i = 31; i >= 0; i--)
                cout << ((n >> i) & 1);

            cout << "\nOctal = " << oct << n;
            cout << "\nHexadecimal = " << hex << n;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

