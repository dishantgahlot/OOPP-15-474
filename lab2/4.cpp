#include <iostream>
using namespace std;

void byValue(int x) {
    x = x + 10;
}

void byReference(int &x) {
    x = x + 10;
}

void byAddress(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 10, b = 10, c = 10;

    byValue(a);
    byReference(b);
    byAddress(&c);

    cout << "Call by Value: " << a << endl;
    cout << "Call by Reference: " << b << endl;
    cout << "Call by Address: " << c << endl;

    return 0;
}