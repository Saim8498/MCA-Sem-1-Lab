#include <iostream>
using namespace std;

int main(){
	int n, soq=0, d;
	cout << "Enter 3 digit num: ";
	cin >> n;
	int check = n;
	while (n != 0){
		d = n%10; //digits in reverse
		soq += d*d*d; //sum of cubes
		n = n/10; //loop condition
	}
	if (soq == check){
		cout << "Armstrong no.";}
	else{
		cout << "Not Armstrong no.";}
	cout << endl;
	return 0;
}
