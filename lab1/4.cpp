#include <iostream>
#include <iomanip>
using namespace std;

class Time {
    int hh, mm, ss;

public:
    void input(int h, int m, int s) {
        hh = h;
        mm = m;
        ss = s;
    }

    void show() {
        cout << setfill('0') << setw(2) << hh << ":"
             << setw(2) << mm << ":"
             << setw(2) << ss << endl;
    }
};

int main() {
    Time t1, t2;

    t1.input(10, 25, 30);
    t2.input(15, 45, 50);

    cout << "Time 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}