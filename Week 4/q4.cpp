#include <iostream>
using namespace std;

int main(){
	int n1=0, n2=1, n, i, next;
	
	cout << "Enter the no. of terms for Fibonacci series: ";
	cin >> n;
	cout << "Fibonacci series : " << n1 << " " << n2 << " ";
	for (int i=2; i<=n-1; i++){
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		cout << next << " ";
	}
	cout << endl;
	return 0;
}
