#include<iostream>
#include<string>
using namespace std;

int main(){
    string food ="Fish";
    string* ptr = &food;

    cout << food << "\n";
    cout << *ptr << "\n";

    *ptr = "Burger";

    cout << *ptr << "\n";
    cout << food << "\n";
    return 0;
}