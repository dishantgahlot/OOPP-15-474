#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    int rollNo;
    float marks;

    Student(int r, float m) {
        rollNo = r;
        marks = m;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Marks: " << marks << endl;
    }
};

int main() {
    unique_ptr<Student> s1 = make_unique<Student>(101, 85.5);

    cout << "Using unique_ptr:" << endl;
    s1->display();

    shared_ptr<Student> s2 = make_shared<Student>(102, 90.5);
    shared_ptr<Student> s3 = s2;

    cout << "\nUsing shared_ptr:" << endl;
    s2->display();
    s3->display();

    cout << "Reference Count: " << s2.use_count() << endl;

    return 0;
}