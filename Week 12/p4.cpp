#include <iostream>
using namespace std;

class Counter
{
public:
    Counter()
    {
        cout << "Object Created" << endl;
    }

    ~Counter()
    {
        cout << "Object Destroyed" << endl;
    }
};

int main()
{
    Counter obj1;

    {
        Counter obj2;
        Counter obj3;
    }

    Counter obj4;

    return 0;
}