#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return a + b;
}
inline int sub(int a, int b)
{
    return a - b;
}
inline int mul(int a, int b=2)
{
    return a * b;
}
float subtract(float a, float b)
{
    return a - b;
}
int main(){
    int x = 10, y = 5;
    cout << "Addition: " << add(x, y) << endl;
    cout << "Subtraction: " << sub(x, y) << endl;
    cout << "Multiplication: " << mul(x, y) << endl;
    cout << "Multiplication with default value: " << mul(x) << endl;
    cout << "Float subtraction: " << subtract(10.5, 5.2) << endl;
    return 0;
}