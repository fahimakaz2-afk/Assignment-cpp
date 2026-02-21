#include <iostream>
using namespace std;

class Complex
{

public:
    int real;
    int imag;
    Complex() {}
    void getdata()
    {
        cout << "Enter the real NO. of Complex no. : " << endl;
        cin >> real;
        cout << "Enter the imaginary NO. of Complex no. : " << endl;
        cin >> imag;
    }

    void show()
    {

        cout << "the Complex no. is: " << endl;
        cout << real << " + " << imag << "i" << endl;
    }
    void sum(Complex c1, Complex c2)
    {
        int a, b;
        a = c1.real + c2.real;
        b = c1.imag + c2.imag;
        cout << "The sum is: " << a << " + " << b << "i";
    }
};

int main()
{
    Complex c, d, e;
    c.getdata();
    c.show();
    d.getdata();
    d.show();
    e.sum(c, d);
    return 0;
}