#include<iostream>
using namespace std;
int maximum(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout<<"Maximum of "<<x<<" and "<<y<<" is : "<<maximum(x,y)<<endl;
    return 0;

}