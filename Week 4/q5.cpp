#include <iostream>
using namespace std;

int main(){
	int n, prime_checker, count=0;
	
	cout << "Prime numbers upto: ";
	cin >> n;
	for (int i=2; i<n;i++){
		prime_checker = 1;
		for (int j=2; j*j <= i; j++){
			if (i%j == 0){
				prime_checker = 0;
				break;
				}
			}
		if (prime_checker == 1){
			cout << i << " ";
			}
	}
	cout << endl;
	return 0;
}
