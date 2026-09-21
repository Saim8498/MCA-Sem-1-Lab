#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter length of array: ";
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cout << "Enter int: ";
		cin >> a[i];
	}
	//second-largest integer in a list
	int n1,n2,gr;
	for (int k=0;k<n;k++){
		for (int j=0;j<n-1;j++){
			n1 = a[j];
			n2 = a[j+1];
			if (n2 > n1){
				a[j] = n2;
				a[j+1] = n1;
			}
		}
	}
	cout << "2nd largest int is: " << a[1] <<endl;
	return 0;
}
