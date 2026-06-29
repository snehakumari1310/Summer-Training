#include<iostream>
using namespace std;

int main(){
    int numbers[5] = {10, 20, 30, 40, 50};
    int* ptr = numbers;
    for(int i = 4; i >= 0; i--){
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}