#include <iostream>
using namespace std;

int main(){
	int n;
	int a[] = {1, 2, 3};
	n = sizeof(a) / sizeof(a[0]);
	cout << "Length of Array is: " << n << endl;
	return 0;
}
