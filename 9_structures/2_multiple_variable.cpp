#include<iostream>
#include<string>

using namespace std;

int main(){
    struct {
        int num;
    } st1, st2;

    st1.num = 5;
    st2.num = 6;

    cout << st1.num << endl;
    cout << st2.num << endl;
    return 0;
}