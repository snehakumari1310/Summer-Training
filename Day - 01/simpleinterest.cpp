#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    float si;
    cout<<"Enter the principal amount ,rate of interest and time period =";
    cin>>p>>r>>t;
    si=(p*r*t)/100;
    cout<<"Simple interest is :"<<si;
    return 0;
}