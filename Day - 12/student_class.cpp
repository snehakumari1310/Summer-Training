#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
    float marks;

    void display(){
        cout<<"Name:" << name <<endl;
        cout<<"Roll No:"<< rollno<<endl;
        cout<<"Marks:" <<marks<<endl;

    }
};

int main(){
    Student s;
    s.name = "Rahul";
    s.rollno =101;
    s.marks = 98.5;
    s.display ();
    return 0;
}