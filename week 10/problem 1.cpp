
#include <iostream>
using namespace std;

struct Complex
{
    float real;
    float imag;
};

// Function to read a complex number
void readComplex(Complex &c)
{
    cout << "Enter real part: ";
    cin >> c.real;
    cout << "Enter imaginary part: ";
    cin >> c.imag;
}

// Function to display a complex number
void displayComplex(Complex c)
{
    cout << c.real;
    if (c.imag >= 0)
        cout << " + " << c.imag << "i";
    else
        cout << " - " << -c.imag << "i";
}

// Addition
Complex add(Complex a, Complex b)
{
    Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

// Subtraction
Complex subtract(Complex a, Complex b)
{
    Complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}

// Multiplication
Complex multiply(Complex a, Complex b)
{
    Complex c;
    c.real = a.real * b.real - a.imag * b.imag;
    c.imag = a.real * b.imag + a.imag * b.real;
    return c;
}

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    readComplex(c1);

    cout << "\nEnter second complex number:\n";
    readComplex(c2);

    cout << "\nFirst Complex Number: ";
    displayComplex(c1);

    cout << "\nSecond Complex Number: ";
    displayComplex(c2);

    result = add(c1, c2);
    cout << "\n\nAddition: ";
    displayComplex(result);

    result = subtract(c1, c2);
    cout << "\nSubtraction: ";
    displayComplex(result);

    result = multiply(c1, c2);
    cout << "\nMultiplication: ";
    displayComplex(result);

    return 0;
}

