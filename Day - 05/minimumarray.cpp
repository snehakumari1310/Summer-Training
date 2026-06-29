#include<iostream>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<min;
    return 0;
}