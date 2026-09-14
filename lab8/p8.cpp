#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    void input() {
        cout << "Enter value: ";
        cin >> value;
    }

    void display() {
        cout << "Value = " << value << endl;
    }

    Number add(Number n) {
        Number result;
        result.value = value + n.value;
        return result;
    }
};

int main() {
    Number n1, n2, n3;

    n1.input();
    n2.input();

    n3 = n1.add(n2);

    cout << "Sum of two numbers:" << endl;
    n3.display();

    return 0;
}