#include<iostream>
#include<string>

using namespace std;

class MyClass{
    public:
        int myNum;
        string myString;
};

int main(){
    MyClass myObj;

    myObj.myNum = 5;
    myObj.myString = "Hello";

    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";
    return 0;
}