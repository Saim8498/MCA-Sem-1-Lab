/*Write a C++ program to create three objects for a class named pntr_obj with
data members such as roll_no&name. Createamemberfunctionset_data()forsettingthe
data values and a print() member function to print which object has invoked it using the
’this’ pointer.*/

#include <iostream>
#include <string>
using namespace std;

class pntr_obj{
    int roll_no;
    string name;
    
    public:
    void set_data(){
        cout << "Enter Roll no: "; cin>>this->roll_no;
        cout << "Enter Name: "; cin>>this->name;
    }

    void print(){
        cout << "Roll no of address "<<this<<" is "<<roll_no<<" and name is "<<name<<endl;
    }
};

int main(){
    //Object 1
    pntr_obj a;
    a.set_data();
    a.print();

    //Object 2
    pntr_obj b;
    b.set_data();
    b.print();
    
    //Object 3
    pntr_obj c;
    c.set_data();
    c.print();

    return 0;
}