#include<iostream>
using namespace std;

class MyClass{
    public:
        void myMethod(){
            cout << "Hello World" << "\n";
        }
        void anotherMethod();
};
void MyClass::anotherMethod(){
    cout << "Another Text" << "\n";
}

int main(){
    MyClass myObj;
    myObj.myMethod();
    myObj.anotherMethod();
}