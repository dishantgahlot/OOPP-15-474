#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    float marks;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Marks: " << marks << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student *students = new Student[n];

    for (int i = 0; i < n; i++) {
        students[i].input();
    }

    cout << "\nStudent Details:\n";

    Student *ptr = students;

    for (int i = 0; i < n; i++) {
        ptr->display();
        ptr++;
    }

    delete[] students;

    return 0;
}



