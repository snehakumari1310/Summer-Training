#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    double reverse=0;
    while(num!=0){
        int digit=num%10;
        reverse=reverse*10+digit;
        num/=10;
    }
    cout<<"Reverse of the number is:"<<reverse<<endl;
    return 0;
}