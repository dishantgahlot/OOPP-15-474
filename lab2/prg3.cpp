#include <iostream>
using namespace std;

void updateByReference(double &salary) {
    salary = salary + (0.10 * salary);
}

void updateByPointer(double *salary) {
    *salary = *salary + (0.10 * (*salary));
}

int main() {
    double salary1 = 50000;
    double salary2 = 50000;

    updateByReference(salary1);
    updateByPointer(&salary2);

    cout << "Salary using reference: " << salary1 << endl;
    cout << "Salary using pointer: " << salary2 << endl;

    return 0;
}