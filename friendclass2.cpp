#include <iostream>
using namespace std;

class complexNum
{
    int real, imag;
    friend class addition;

public:
    complexNum()
    {
        real = 0;
        imag = 0;
    }
    complexNum(int a, int b)
    {
        real = a;
        imag = b;
    }

    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

class addition
{
public:
    complexNum add(complexNum c1, complexNum c2)
    {
        complexNum c3;
        c3.real = c1.real + c2.real;
        c3.imag = c1.imag + c2.imag;
        return c3;
    }
};

int main()
{
    complexNum c1(2, 3), c2(1, 4), c3;
    addition add;
    c3 = add.add(c1, c2);
    c3.display();
}
