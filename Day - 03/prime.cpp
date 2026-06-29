#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    bool isPrime=true;
    if(num<=1){
        isPrime=false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<"The number is prime."<<endl;
    }
    else{
        cout<<"The number is not prime."<<endl;
    }
    return 0;
}