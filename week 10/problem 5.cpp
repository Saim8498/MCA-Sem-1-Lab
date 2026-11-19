
#include <iostream>
#include <string>
using namespace std;

// Structure for Date of Birth
struct DOB
{
    int day;
    int month;
    int year;
};

// Structure containing nested DOB structure
struct Student
{
    string name;
    DOB date;
};

int main()
{
    Student s;

    cout << "Enter your name: ";
    getline(cin, s.name);

    cout << "Enter date of birth:\n";

    cout << "Enter day: ";
    cin >> s.date.day;

    cout << "Enter month: ";
    cin >> s.date.month;

    cout << "Enter year: ";
    cin >> s.date.year;

    cout << "\n----- Student Details -----\n";

    cout << "Name: " << s.name << endl;

    cout << "Date of Birth: "
         << s.date.day << "/"
         << s.date.month << "/"
         << s.date.year << endl;

    return 0;
}

