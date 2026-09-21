#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a, b, c, check;
	cout << "Enter coefficient of x^2: ";
	cin >> a;
	cout << "Enter coefficient of x: ";
	cin >> b;
	cout << "Enter coefficient of constant: ";
	cin >> c;
	check =(b*b) - (4*a*c);
	if ( check>= 0){
		cout << "Root 1: " << ((-b + pow(check, 0.5))/(2*a)) << endl;
		cout << "Root 2: " << ((-b - pow(check, 0.5))/(2*a)) << endl;
	}
	else
		cout << "Roots are imaginary!" << endl;
	return 0;
}
