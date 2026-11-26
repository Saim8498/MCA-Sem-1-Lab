
#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    string name;
    float basicPay;
    float DA;
    float grossSalary;
};

int main()
{
    Employee emp[100];

    for (int i = 0; i < 100; i++)
    {
        cout << "\nEnter details of employee "
             << i + 1 << endl;

        cout << "Enter employee name: ";
        getline(cin >> ws, emp[i].name);

        cout << "Enter basic pay: ";
        cin >> emp[i].basicPay;

        emp[i].DA = emp[i].basicPay * 52 / 100;

        emp[i].grossSalary =
            emp[i].basicPay + emp[i].DA;
    }

    cout << "\n----- Employee Salary Details -----\n";

    for (int i = 0; i < 100; i++)
    {
        cout << "\nEmployee Name: "
             << emp[i].name;

        cout << "\nGross Salary: "
             << emp[i].grossSalary << endl;
    }

    return 0;
}

