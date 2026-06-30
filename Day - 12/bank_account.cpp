#include<iostream>
using namespace std;

class BankAccount{
    public:
    double balance = 0;

    void deposit(double amount){
        balance += amount;
    }
    void withDraw(double amount){
        balance -= amount;
    }

    void display(){
        cout<<"Balance =" <<balance;
    }
};

int main(){
    BankAccount b;
    b.deposit(5000);
    b.withDraw(2000);
    b.display();
    return 0;

}