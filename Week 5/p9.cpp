#include <iostream>
using namespace std;

int main(){
	int len, num, count=0;
	cout << "Enter length of array: ";
	cin >> len;
	int arr[len];
	for (int i=0;i<len;i++){
		cout << "Enter element " << i+1 << ": ";
		cin >> arr[i];
	}
	
	cout << "Enter int to check: ";
	cin >> num;
	for (int i=0;i<len;i++){
		if (arr[i] == num){
			count++;
		}
	}
	cout << "Count of " << num << " is " << count;
	return 0;
}
