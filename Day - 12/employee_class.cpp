#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int id;

    Employee(string n, int i){
        name = n;
        id = i;
    }

    void display(){
        cout<< "Name :" <<name<<endl;
        cout<<"ID:"<<id<<endl;
    }
};

int main(){
    Employee e1("Amit",101);
    e1.display();
    return 0;
}