#include<iostream>
using namespace std;

int addNum(int x, int y){
    return x + y;
}

double addNum(double x, double y){
    return x + y;
}

int main(){
    int sum1 = addNum(5, 7);
    double sum2 = addNum(5.4, 4.6);

    cout << sum1 << "\n";
    cout << sum2 << "\n";
    return 0;
}