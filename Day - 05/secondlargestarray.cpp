#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int secondlargest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }
    cout << secondlargest;
    return 0;
}