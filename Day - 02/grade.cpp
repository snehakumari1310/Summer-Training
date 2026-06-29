#include<iostream>
using namespace std;
int main(){
    int grade;
    cout<<"Enter your grade:";
    cin>>grade;
    if(grade>=90 && grade<=100){
        cout<<"Your grade is A";
    }else if(grade>=80 && grade<90){
        cout<<"Your grade is B";
    }else if(grade>=70 && grade<80){
        cout<<"Your grade is C";
    }else if(grade>=60 &&grade<70){
        cout<<"Your grade is D";
    }else{
        cout<<"Your grade is F";
    }
    return 0;

}