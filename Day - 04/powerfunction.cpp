#include<iostream>
using namespace std;

float power(float base, int exponent){
    float result = 1.0;
    for(int i=0; i<exponent; i++){
        result *= base;
    }
    return result;
}
int main(){
    float base;
    int exponent;
    cout<<"Enter base and exponent:";
    cin>>base>>exponent;
    cout<<base<<" raised to the power "<<exponent<<" is "<<power(base, exponent)<<endl;
    return 0;
}