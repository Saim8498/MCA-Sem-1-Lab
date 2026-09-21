#include <iostream>
using namespace std;

int main(){
	int n, sum=0;
	cout << "Enter array size: ";
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		cout << "Enter element " << i+1 << ": ";
		cin >> a[i];
	}
	for (int i=0;i<n;i++){
		sum += a[i];
	}
	cout << "Sum of all elements: " << sum <<endl;
	return 0;
}
