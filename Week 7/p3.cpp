#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, *ptr;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cout << "Enter element"<<i+1<<": ";
        cin>>a[i];
    }

    //Sum
    int sum = 0;
    ptr = a;
    for (int i=0;i<n;i++){
        sum += *(ptr + i);
    }
    
    //Mean
    float mean = sum/n;

    //Std deviation
    float var;
    for (int i=0;i<n;i++){
        var = pow(*(ptr + i) - mean, 2);
    }
    var /= n;
    float std_dev = sqrt(var);

    //Results
    cout << "Sum is: "<<sum<<endl
    <<"Mean is: "<<mean<<endl
    <<"Standard deviation is: "<<std_dev;

    return 0;
}