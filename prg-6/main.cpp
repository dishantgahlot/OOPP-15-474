#include <iostream>
using namespace std;

class Demo {
public:
    // Default constructor
    Demo() {
        cout << "Default Constructor\n";
    }

    // Parameterized constructor
    Demo(int x) {
        cout << "Parameterized Constructor: " << x << endl;
    }

    // Copy constructor
    Demo(const Demo &obj) {
        cout << "Copy Constructor\n";
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called\n";
    }
};

int main() {
    Demo a;          // Default constructor
    Demo b(10);      // Parameterized constructor
    Demo c = b;      // Copy constructor

    return 0;        // Destructors are called automatically
}