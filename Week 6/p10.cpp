#include <iostream>
using namespace std;

int main(){
	char str[100], *ptr;
	cout << "Enter a string: ";
	cin.getline(str, 100);
	ptr = str;
	while (*ptr != '\0'){ //ptr gets to end
		ptr++;
	}
	ptr--;//moves back & print
	cout << "Reverse: ";
	while (ptr >=str){ //print in rev
		cout << *ptr;
		ptr--;
	}
	return 0;
}
