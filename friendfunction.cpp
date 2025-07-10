#include <iostream>
using namespace std;

class complexNum
{
    float real, imag;

public:
    complexNum()
    {
        real = 0.0;
        imag = 0.0;
    }

    complexNum(float a, float b)
    {
        real = a;
        imag = b;
    }

    void showData()
    {
        cout << "The sum is " << real << "+" << imag << "i" << endl;
    }
    friend complexNum addition(complexNum, complexNum);
};

complexNum addition(complexNum cc1, complexNum cc2)
{
    complexNum temp;
    temp.real = cc1.real + cc2.real;
    temp.imag = cc1.imag + cc2.imag;
    return temp;
}

int main()
{
    float a, b, c, d;
    cout << "Enter real and imaginary part of first complex number" << endl;
    cin >> a >> b;
    cout << "Enter real and imaginary part of second complex number" << endl;
    cin >> c >> d;
    complexNum c1(a, b), c2(c, d), c3;
    c3 = addition(c1, c2);
    c3.showData();

    return 0;
}