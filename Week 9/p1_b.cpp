#include <iostream>
using namespace std;

//Non-recursive
int gcd(int a, int b){
    while (b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

//Recursive
int recursiveGCD(int a, int b){
    if (b == 0)
        return a;

    return recursiveGCD(b, a % b);
}

int main(){
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD (Non-Recursive): " << gcd(a, b);
    cout << "\nGCD (Recursive): " << recursiveGCD(a, b);

    return 0;
}