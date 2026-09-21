#include <iostream>
using namespace std;

int main(){
    char str1[100], str2[100];
    char *p1, *p2;

    cout << "Enter 1st string: ";
    cin.getline(str1, 100);

    cout << "Enter 2nd string: ";
    cin.getline(str2, 100);

    p1 = str1;
    p2 = str2;

    while (*p1 != '\0'){ //shift the ptr to the end of str1
        p1++;
    }

    while (*p2 !='\0'){
        *p1 = *p2; //points p2 to p1
        p1++;
        p2++;
    }
    *p1 = '\0'; //marks the end of str
    cout << "String: " << str1;
    return 0;
}