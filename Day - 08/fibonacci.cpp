#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Fibonacci of " << num << " is " << fibonacci(num) << endl;
    return 0;
}