
#include <iostream>
using namespace std;

int main()
{
    int n, temp, reverse = 0;
    int d1, d2, d3, d4;
    int choice;

    cout << "Enter a four-digit number: ";
    cin >> n;

    if(n < 1000 || n > 9999)
    {
        cout << "Please enter a valid four-digit number.";
        return 0;
    }

    temp = n;

    while(temp > 0)
    {
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }

    cout << "\n----- MENU -----";
    cout << "\n1. Reverse of number";
    cout << "\n2. Sum of number and reverse";
    cout << "\n3. Sum of alternative digits";

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Reverse = " << reverse;
            break;

        case 2:
            cout << "Sum = " << n + reverse;
            break;

        case 3:
            d1 = n / 1000;
            d2 = (n / 100) % 10;
            d3 = (n / 10) % 10;
            d4 = n % 10;

            cout << "1st + 3rd digit = "
                 << d1 + d3 << endl;

            cout << "2nd + 4th digit = "
                 << d2 + d4;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

