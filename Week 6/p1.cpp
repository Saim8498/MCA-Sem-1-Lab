#include <iostream>
using namespace std;

int main(){
	int n1, n2;
	cout << "Enter 2 numbers: ";
	cin >> n1 >> n2;
	int* num1 = &n1;
	int* num2 = &n2;
	cout << "Sum is: " << *num1 + *num2;
	return 0;
}
