#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int count=0;
    while(num!=0){
        num/=10;
        count++;
    }
    cout<<"Number of digits is:"<<count<<endl;
    return 0;
}