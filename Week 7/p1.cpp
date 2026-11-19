#include <iostream>
using namespace std;

//count vowels in str using ptr

int main(){
    char a[100];
    char v[] = "aeiouAEIOU";
    int count=0;
    
    cout << "Enter string: ";
    cin >> a;

    for (char *ptr_chr = a; *ptr_chr != '\0'; ptr_chr++){
        for (char *ptr_vow = v; *ptr_vow !='\0'; ptr_vow++){
            if (*ptr_chr == *ptr_vow){
                count++;
                break;
            }
        }
    }
    cout << "Vowel count is: " << count;
    return 0;
}