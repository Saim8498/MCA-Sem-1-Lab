#include <iostream>
using namespace std;

int findSum(int arr[], int n) {
    if (n == 0)
        return 0;

    return arr[n - 1] + findSum(arr, n - 1);
}

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sum of array elements: " << findSum(arr, n);

    return 0;
}