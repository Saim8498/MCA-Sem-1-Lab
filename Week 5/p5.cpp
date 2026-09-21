#include <iostream>
using namespace std;

int main(){
	//define the array
	int n;
	cout << "Enter length of array: ";
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cout << "Enter element: ";
		cin >> a[i];
	}
	//now reverse the array
	int rev[n];
	for (int j=0;j<n;j++){
		for (int k=0;k<n;k++){
			rev[k] = a[n-k-1];
		}
	}
	cout << "Your array-\n";
	for (int m=0;m<n;m++){
		cout << a[m] << " ";
	}
	cout << "\nReverse array-\n";
	for (int l=0;l<n;l++){
		cout << rev[l] << " ";
	}
	cout << endl;
	return 0;
}
