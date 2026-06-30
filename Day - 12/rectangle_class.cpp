#include<iostream>
using namespace std;

class Rectangle{
    public:int lenght, width;

    void setData(int l, int w){
        lenght=l;
        width=w;
    }

    int area(){
        return lenght*width;
    }
};

int main(){
    Rectangle r;
    r.setData(10,6);
    cout<<"Area ="<<r.area();
    return 0;
}