#include<iostream>
using namespace std;

int GCD(int a, int b){
    if(b==0){
        return a;
    }else{
        return GCD(b, a%b);
    }
}

int main(){
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"GCD of "<<x<<" and "<<y<<" is "<<GCD(x,y)<<endl;
    return 0;
}