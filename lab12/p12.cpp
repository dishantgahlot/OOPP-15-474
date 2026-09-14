#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator-() {
        return Complex(-real, -imag);
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main() {
    Complex c1(5, 3);
    Complex c2(2, 4);

    Complex c3 = c1 + c2;
    Complex c4 = -c1;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Binary Operator (+): ";
    c3.display();

    cout << "Unary Operator (-): ";
    c4.display();

    return 0;
}