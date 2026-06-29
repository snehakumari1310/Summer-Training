#include<iostream>
using namespace std;
int main(){
    int celsius;
    float fahrenheit;
    cout<<"Enter temperature in celsius :";
    cin>>celsius;
    fahrenheit=(celsius*9/5)+32;
    cout<<"Temperature in fahrenheit is :"<<fahrenheit;
    return 0;
}