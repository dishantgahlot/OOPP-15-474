#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imag;

public:
    Complex(){
        real = 0;
        imag = 0;
    }

    Complex(float Real, float Imag){
        real = Real;
        imag = Imag;
    }

    void input(){
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex add(Complex c){
        return Complex(real + c.real, imag + c.imag);
    }

    void show(){
        if (imag >= 0)
            cout << real << " + " << imag << "i";
        else
            cout << real << " - " << -imag << "i";
    }

    Complex add(Complex c1, Complex c2){

      return Complex(c1.real +c2.real , c1.imag + c2.imag);

    }
};

int main()
{
    Complex c1, c2;

    c1.input();
    c2.input();

    Complex c3 = c1.add(c2);

    cout << "\nSum = ";
    c3.show();

    cout<<"\n";

    Complex res = res.add(c1,c2);
    cout<<"C3 : ";
    res.show();
    

    return 0;
}