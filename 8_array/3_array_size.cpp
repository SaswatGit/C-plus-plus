#include<iostream>
#include<string>
using namespace std;

int main(){
    string names[] = {"Ram", "Hari", "Ramesh"};
    cout << sizeof(names) << endl;//return size of type in byte
    cout << sizeof(names)/sizeof(string);
}