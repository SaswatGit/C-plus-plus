#include<iostream>
#include<string>
using namespace std;

int main(){
    string myNames[4] = {"Ram", "Hari", "Ramesh", "Rakesh"};
    for(string i: myNames)
    {
        cout << i << "\n";
    }
}