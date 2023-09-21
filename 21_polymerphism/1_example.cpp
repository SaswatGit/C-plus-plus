#include<iostream>
using namespace std;

class Animal{
    public:
        void animalSound(){
            cout << "Animals make some sound." << "\n";
        }
};

class Dog:public Animal{
    public:
        void dogSound(){
            cout << "Dogs make some sound." << "\n";
        }
};

int main(){
    Animal animalObj;
    Dog dogObj;

    animalObj.animalSound();
    dogObj.dogSound();

    return 0;
}