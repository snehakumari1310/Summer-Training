#include <iostream>
using namespace std;

int main() {
    int x = 42;

    int* p = &x;

    if (p == nullptr) {
        cout << "Pointer is null.\n";
        return 1;
    }

    cout << "Address stored in pointer p (address of x): " << p << endl;

    cout << "Address of the pointer variable p: " << &p << endl;

    cout << "Value pointed to by p: " << *p << endl;

    return 0;
}
