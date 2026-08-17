#include <iostream>
using namespace std;

class Mama {
public:
    // Default constructor
    Mama() {
        cout << "Default Constructor\n";
    }

    // Parameterized constructor
    Mama(int x) {
        cout << "Parameterized Constructor: " << x << endl;
    }

    // Copy constructor
    Mama(const Mama &obj) {
        cout << "Copy Constructor\n";
    }

    // Destructor
    ~Mama() {
        cout << "Destructor called\n";
    }
};

int main() {
    Mama a;          // Default constructor
    Mama b(10);      // Parameterized constructor
    Mama c = b;      // Copy constructor

    return 0;        // Destructors are called automatically
}