#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    double add(double a, double b, double c) {
        return a + b + c;
    }

    string add(string a, string b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << "Integer addition: " << c.add(10, 20) << endl;
    cout << "Float addition: " << c.add(10.5f, 20.5f) << endl;
    cout << "Double addition: " << c.add(10.5, 20.5, 30.5) << endl;
    cout << "String concatenation: " << c.add("Hello ", "World") << endl;

    return 0;
}