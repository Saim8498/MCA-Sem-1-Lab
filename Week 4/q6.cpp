#include <iostream>
using namespace std;

int main(){
	char c;
	int category, ascii;
	cout << "Enter a character: ";
	cin >> c;
	ascii = static_cast<int>(c);
	
	if (ascii >= 65 && ascii <=90)
		category = 1;
	else if (ascii >= 97 && ascii <=122)
		category = 2;
	else if (ascii >= 48 && ascii <=57)
		category = 3;
	else if ((ascii >= 0 && ascii <=47) || (ascii >= 58 && ascii <= 64) || (ascii >= 91 && ascii <= 96) || (ascii >= 123 && ascii <=127))
		category = 4;
	
	switch (category){
		case 1:
			cout << "Capital Letter" << endl;
			break;
		case 2:
			cout << "Small Letter" << endl;
			break;
		case 3:
			cout << "Digit" << endl;
			break;
		case 4:
			cout << "Special symbol" << endl;
			break;
	}
	cout << endl;
	return 0;
}
