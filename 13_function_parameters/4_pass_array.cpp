#include<iostream>
using namespace std;

void passArrayFunction(int myArray[5]){
    for(int i = 0 ; i < 5 ; i++){
        cout << myArray[i] << "\n";
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    passArrayFunction(arr);
}