#include <iostream>
#include <limits>
using namespace std;


int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin>>num1;

    cout << "Enter second number: ";
    cin>> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result: " << (num1 + num2) << endl;
            break;

        case '-':
            cout << "Result: " << (num1 - num2) << endl;
            break;

        case '*':
            cout << "Result: " << (num1 * num2) << endl;
            break;

        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed.\n";
            } else {
                cout << "Result: " << (num1 / num2) << endl;
            }
            break;

        default:
            cout << "Invalid operator. Please use +, -, *, or /.\n";
            return 1;
    }

    return 0;
}
