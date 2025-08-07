// WAP in C++ to overload extraction and insertion operator for object input and output using friend function

#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    Complex()
    {
        real = imag = 0.0;
    }

    friend istream &operator>>(istream &in, Complex &c);
    friend ostream &operator<<(ostream &out, Complex &c);
};

istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter real and imaginary part" << endl;
    in >> c.real;
    in >> c.imag;
    return in;
}
ostream &operator<<(ostream &out, Complex &c)
{
    out << c.real << "+" << c.imag << "i";
    return out;
}

int main()
{
    Complex c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    cout << c1 << c2 << c3;
    return 0;
}