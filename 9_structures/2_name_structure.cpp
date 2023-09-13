#include<iostream>
#include<string>
using namespace std;

struct car{
    string brand;
};

int main(){
    car myCar1;
    myCar1.brand = "Ford";
    
    car myCar2;
    myCar2.brand = "BMW";

    cout << myCar1.brand << endl;
    cout << myCar2.brand << endl;
    return 0;
}