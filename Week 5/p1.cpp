#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter array size: ";
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		cout << "Enter element " << i+1 << ": ";
		cin >> a[i];
	}
	cout << "Your Array: ";
	for (int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
