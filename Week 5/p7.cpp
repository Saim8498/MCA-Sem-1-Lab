#include <iostream>
using namespace std;

// count and display positive, negative, odd, and even numbers in an array
int main(){
	int n;
	cout << "Enter length of array: ";
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cout << "Enter int "<< i+1 <<": ";
		cin >> a[i];
	}
	int c_pos=0, c_neg=0, c_odd=0, c_even=0; // count pos, neg, odd, even
	//for positive
	cout << "\nPositive numbers are: "; 
	for (int pos=0;pos<n;pos++){
		if (a[pos]>=0){
			c_pos++;
			cout << a[pos] << " ";
		}
	}
	cout << endl << "Positive count: " << c_pos << endl;
	//for negative
	cout << "\nNegative numbers are: "; 
	for (int neg=0;neg<n;neg++){
		if (a[neg] < 0){
			c_neg++;
			cout << a[neg] << " ";
		}
	}
	cout << endl << "Negative count: " << c_neg << endl;
	//for even
	cout << "\nEven numbers are: "; 
	for (int even=0;even<n;even++){
		if (a[even] %2 == 0){
			c_even++;
			cout << a[even] << " ";
		}
	}
	cout << endl << "Even count: " << c_even << endl;
	//for odd
	cout << "\nOdd numbers are: "; 
	for (int odd=0;odd<n;odd++){
		if (a[odd] %2 != 0){
			c_odd++;
			cout << a[odd] << " ";
		}
	}
	cout << endl << "Odd count: " << c_odd << endl;
	return 0;
}
