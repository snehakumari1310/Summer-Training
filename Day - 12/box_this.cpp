#include<iostream>
using namespace std;

class Box{
    int length;

    void setLenght(int lenght){
        // this->lenght = member variable;
        //lenght = parameter

        this-> length = length;
    }
    void display() {
        cout<<"Length = "<<length;
    }
};

int main(){
    Box b;
    b.setLength(20);
    b.display();
    return 0;
}