#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }

    Number add(Number n) {       // Object passed as argument
        return Number(value + n.value); // Object returned
    }

    void display() {
        cout << "Result: " << value << endl;
    }
};

int main() {
    Number n1(10), n2(20);

    Number n3 = n1.add(n2);
    n3.display();

    return 0;
}