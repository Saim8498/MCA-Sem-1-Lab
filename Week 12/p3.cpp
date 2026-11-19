#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    float base, height;

public:
    // Parameterized Constructor
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    // Function to calculate hypotenuse
    float hypo()
    {
        return sqrt(base * base + height * height);
    }

    // Function to calculate area
    float area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Triangle t1(3, 4);

    cout << "Hypotenuse: " << t1.hypo() << endl;
    cout << "Area: " << t1.area() << endl;

    return 0;
}