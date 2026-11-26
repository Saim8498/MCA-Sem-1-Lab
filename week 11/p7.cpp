
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Bubble Sort
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted array in ascending order:\n";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

