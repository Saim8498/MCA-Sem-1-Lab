#include <iostream>
using namespace std;

int main(){
	int n, sum=0;
	cout << "Enter length of array: ";
	cin >> n;
	int arr[n];
	int *ptr;
	cout << "Enter " << n << " elements: ";
	ptr = arr;
	for (int i=0;i<n;i++){
		cin >> *ptr;
		ptr++;
	}
	//Sum
	ptr = arr;
	for (int i=0;i<n;i++){
		sum += *ptr;
		ptr++;
	}
	//Display
	cout << "Sum: " << sum;
	return 0;
}
