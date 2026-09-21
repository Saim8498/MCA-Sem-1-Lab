#include <iostream>
using namespace std;

int main(){
	int r1,c1, r2, c2;
	
	//------------------- Matrix input -----------------------
	cout << "Input size for 1st Matrix-";
	cout << "\nEnter no. of rows and columns of matrix 1: ";
	cin >> r1 >> c1;
	int m1[r1][c1];
	for (int i=0;i<r1;i++){
		for (int j=0;j<c1;j++){
			cout << "Enter element (" << i+1 << ", " << j+1 <<"): ";
			cin >> m1[i][j];
		}
	}
	cout << "\nInput size for 2nd Matrix-\n";
	cout << "Enter no. of rows and columns of matrix 2: ";
	cin >> r2 >> c2;
	int m2[r2][c2];
	for (int i=0;i<r2;i++){
		for (int j=0;j<c2;j++){
			cout << "Enter element (" << i+1 << ", " << j+1 <<"): ";
			cin >> m2[i][j];
		}
	}
	
	//-------------------- Matrix Addition ----------------------
	int add[r1][c1];
	if (r1==r2 && c1==c2){
		for (int i=0;i<r1;i++){
			for (int j=0;j<c1;j++){
				add[i][j] = m1[i][j] + m2[i][j];
			}
		}
		cout << "\nMatrix Addition-\n";
		for (int i=0;i<r1;i++){
			for (int j=0;j<c1;j++){
				cout << add[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << "\nAddition cannot be performed due to different matrix sizes!\n";
	}
	//------------------- Matrix Multiplication ------------------
	// int prod[r1][c2]= {0}; //not working for g++ compiler
	int prod[r1][c2];
	for (int i=0; i<r1; i++){
    	for (int j=0; j<c2; j++){
        	prod[i][j] = 0;
    	}
	}
	if (c1 == r2){
		//initialise with 0 to add the multiplication in each element position
		for (int i=0;i<r1;i++){
			for (int j=0;j<c2;j++){
				for (int k=0;k<c1;k++){
					prod[i][j] += m1[i][j] * m2[i][j];
				}
			}
		}
		cout << "\nMatrix Multiplication-\n";
		for (int i=0;i<r1;i++){
			for (int j=0;j<c2;j++){
				cout << prod[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << "\nMultiplication not possible";
	}
	return 0;
}
