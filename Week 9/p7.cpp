#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int max = findMax(arr, n - 1);

    if (arr[n - 1] > max)
        return arr[n - 1];

    return max;
}

int findMin(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int min = findMin(arr, n - 1);

    if (arr[n - 1] < min)
        return arr[n - 1];

    return min;
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

    cout << "Maximum element: " << findMax(arr, n);
    cout << "\nMinimum element: " << findMin(arr, n);

    return 0;
}