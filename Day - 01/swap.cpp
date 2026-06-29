#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Before swapping two numbers are :"<<temp<<" "<<a << endl;
    cout<<"After swapping two numnbers are : "<<a<<" "<<b;
    return 0;
}