#include <iostream>
using namespace std;

//Function to find transpose
void transpose(int a[10][10], int r, int c){
    cout << "\nTranspose of matrix:\n";

    for (int i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int a[10][10], r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;
    cout << "Enter matrix elements:\n";

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }

    transpose(a, r, c);
    return 0;
}