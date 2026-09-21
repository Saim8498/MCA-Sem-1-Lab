#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter length of array: ";
	cin >> n;
	int arr[n];
	int *ptr;
	cout << "Enter " << n << " elements: ";
	ptr = arr;
	//Inp elements
	for (int i=0;i<n;i++){
		cin >> *ptr;
		ptr++;
	}
	//Display
	for (int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
