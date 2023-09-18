#include<iostream>
#include<string>
using namespace std;

class Vehicle{
    public:
    string brand = "Ford";
        void text(){
            cout << "Hello" <<"\n";
        }
};

class Car:public Vehicle{
    public:
        string name = "Ramesh";
};

int main(){
    Car obj;
    obj.text();
    cout << obj.brand << "\n";
    return 0;
}