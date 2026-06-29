#include<iostream>
using namespace std;

string reverseString(string str) {
    if (str.empty()) {
        return "";
    } else {
        return str.back() + reverseString(str.substr(0, str.size() - 1));
    }
}
// to calculate the reverse of a string using recursion
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}
 