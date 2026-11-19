/*Write a C++ program to implement a flight class with data members as flight
number, source, destination, and fare. Write a member function to display the flight infor
mation using this pointer*/

#include <iostream>
#include <string>
using namespace std;

class flight{
    int flight_no;
    string source, destination;
    float fare;

    public:
    void Display(int flight_no, string source, string destination){
         this->flight_no = flight_no;
         this->source = source;
         this->destination = destination;
         cout << "Flight no: "<<this->flight_no<<" is starting from: "<<this->source
         <<" and destination is: "<<this->destination;
    }
};

int main(){
    flight f1;
    f1.Display(161, "abc", "xyz");
    return 0;
}