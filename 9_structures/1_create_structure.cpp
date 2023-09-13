#include<iostream>
#include<string>
using namespace std;

int main(){
    struct {
        int number;
        string myName;
    } st;

    st.number = 5;
    st.myName = "Saswat";

    cout << st.number << endl;
    cout << st.myName << endl;
    return 0;
}