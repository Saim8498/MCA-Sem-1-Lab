#include <iostream>
using namespace std;

//Non-recursive
int factorial(int n){
    int fact = 1;

    for (int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

//Recursive
int recursiveFactorial(int n){
    if (n == 0 || n == 1)
        return 1;

    return n * recursiveFactorial(n - 1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial (Non-Recursive): " << factorial(n);
    cout << "\nFactorial (Recursive): " << recursiveFactorial(n);

    return 0;
}