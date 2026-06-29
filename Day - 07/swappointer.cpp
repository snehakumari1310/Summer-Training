#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping using pointers
    int* ptrA = &a;
    int* ptrB = &b;

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}