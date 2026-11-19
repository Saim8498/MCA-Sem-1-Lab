//Write a C++ program to use this pointer and return the pointer reference.
#include <iostream>
using namespace std;

class Student{
    int marks;
    public:
    Student (int marks){
        cout << "Enter marks: ";
        cin>>this->marks;
        // this->marks = marks;
    }
    Student &get_obj(){
        return *this;
    }
    void display(){
        cout << "Marks: "<<marks<<endl;
    }
};

int main(){
    Student s(10);
    s.get_obj().display();
    return 0;
}