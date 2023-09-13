#include<iostream>
using namespace std;

void swapFunction(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main(){
    int firstNum = 5;
    int secondNum = 6;

    cout << firstNum << "\n";
    cout << secondNum << "\n";

    swapFunction(firstNum, secondNum);

    cout << firstNum << "\n";
    cout << secondNum << "\n";

}