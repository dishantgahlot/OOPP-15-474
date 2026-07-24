#include <bits/stdc++.h>
using namespace std;

class studentRecord {

private :
    string name;
    int rollNumber;
    bool isPresent;
    int totalAttendance;
    bool dues;

    
public : 
    studentRecord(string name, int rollNumber, bool isPresent,
                  int totalAttendance, bool dues) {

        this->name = name;
        this->rollNumber = rollNumber;
        this->isPresent = isPresent;
        this->totalAttendance = totalAttendance;
        this->dues = dues;
    }

    void display() {

        cout << boolalpha;

        cout << "Name : " << name << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Is Present : " << isPresent << endl;
        cout << "Total Attendance : " << totalAttendance << endl;
        cout << "Dues : " << dues << endl;
    }
};

int main() {

    studentRecord s("Dishant", 78, false, 180, false);

    s.display();

    return 0;
}