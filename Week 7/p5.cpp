#include <iostream>
using namespace std;

class num{
    int n;
    public:
    num (int n){
        this->n=n;
    }
    int getnum(){
        return this->n;
    }
};

int main(){
    int a, b;
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;
    num n1(a), n2(b);

    if(n1.getnum()>n2.getnum()){
        cout << n1.getnum()<< " is greater";
    }
    else{
        cout << n2.getnum()<<" is greater";
    }
    return 0;
}