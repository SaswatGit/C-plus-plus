#include<iostream>
#include<string>
using namespace std;

void myFunction(string fname = "Saswat"){
    cout << "My first name is " << fname << endl;
}

int main(){
    myFunction();
}