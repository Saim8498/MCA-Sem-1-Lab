
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    string name;
    int accountNumber;
    string accountType;
    float balance;

public:

    void initialize()
    {
        cout << "Enter depositor name: ";
        getline(cin >> ws, name);

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter account type: ";
        cin >> accountType;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        if(amount > 0)
        {
            balance = balance + amount;
            cout << "Amount deposited successfully.";
        }
        else
        {
            cout << "Invalid amount.";
        }
    }

    void withdraw()
    {
        float amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if(amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal successful.";
        }
        else
        {
            cout << "Insufficient balance or invalid amount.";
        }
    }

    void display()
    {
        cout << "\n----- Account Details -----";
        cout << "\nName: " << name;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Type: " << accountType;
        cout << "\nBalance: " << balance;
    }
};

int main()
{
    BankAccount b;
    int choice;

    b.initialize();

    do
    {
        cout << "\n\n----- BANK MENU -----";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display Details";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                b.deposit();
                break;

            case 2:
                b.withdraw();
                break;

            case 3:
                b.display();
                break;

            case 4:
                cout << "Thank you!";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 4);

    return 0;
}

