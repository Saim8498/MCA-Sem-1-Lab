#include <iostream>
using namespace std;

class Calculator
{
private:
    int a, b, c, d;

public:
    // Parameterized Constructor
    Calculator(int x, int y, int z, int w)
    {
        a = x;
        b = y;
        c = z;
        d = w;
    }

    // Function to perform arithmetic operations
    void calculate()
    {
        cout << "Addition: " << a + b + c + d << endl;
        cout << "Subtraction: " << a - b - c - d << endl;
        cout << "Multiplication: " << a * b * c * d << endl;
        cout << "Division: " << (float)a / b << endl;
    }
};

int main()
{
    Calculator obj(20, 5, 2, 1);

    obj.calculate();

    return 0;
}