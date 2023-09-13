#include<iostream>
using namespace std;

class MyClass{
    public:
        MyClass(){//The constructor will be automatically called when an object is created
            cout << "Hello World" << "\n";
        }
};

int main(){
    MyClass myObj;

    return 0;
}