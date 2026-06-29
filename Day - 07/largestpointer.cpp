#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* ptr3 = &num3;

    int* largest = ptr1;

    if (*ptr2 > *largest) {
        largest = ptr2;
    }

    if (*ptr3 > *largest) {
        largest = ptr3;
    }

    cout << "The largest number is: " << *largest << endl;

    return 0;
}