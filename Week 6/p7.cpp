#include <iostream>
using namespace std;

int main(){
	//Step 1
	int n;
	cout << "Enter length of array: ";
	cin >> n;
	int arr[n];
	int *ptr;
	cout << "Enter " << n << " elements: ";
	ptr = arr;
	//Step 2
	for (int i=0;i<n;i++){
		cin >> *ptr;
		ptr++;
	}
	//Step 3
	for (int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
