#include<iostream>
using namespace std;

class Employee{
    private:
        int salary = 500;
    
    public:
        void setSalary(int s){
            salary = s;
        }

        int getSalary(){
            return salary;
        }
};

int main(){
    Employee obj;

    obj.setSalary(5000);

    cout << "Updated salary: " << obj.getSalary() << "\n";
    return 0;
}