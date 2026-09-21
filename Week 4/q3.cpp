#include <iostream>
using namespace std;
int main(){
	float a, b, c, d, e, f, g, res;
	cout << "Enter the values of a, b, c, d, e, f, g: ";
	cin >> a >> b >> c >> d >> e >> f >> g;
	res = ((a+b/c*d-e)*(f-g));
	cout << "Result: " << res << endl;
	return 0;
}
