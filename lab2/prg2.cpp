#include <iostream>
using namespace std;

int main() {
    double salary = 50000;
    double *newSalary = &salary;

    *newSalary = *newSalary + (0.10 * (*newSalary));

    cout << "Updated Salary: " << salary << endl;

    return 0;
}