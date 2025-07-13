/*syntax for unary binary operator overloading
- prefix classname operator existingoperator()
- postfix classname operator existingoperator(int)
*/

#include <iostream>
using namespace std;

class ComplexNum
{
    int real, imag;

public:
    ComplexNum()
    {
        real = 0;
        imag = 0;
    }

    ComplexNum(int a, int b)
    {
        real = a;
        imag = b;
    }

    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
    friend ComplexNum operator++(ComplexNum &);
    friend ComplexNum operator++(ComplexNum &, int);
};

ComplexNum operator++(ComplexNum &c1) // prefix
{
    ComplexNum temp;
    temp.real = ++c1.real;
    temp.imag = ++c1.imag;
    return temp;
}

ComplexNum operator++(ComplexNum &c2, int) // postfix
{
    ComplexNum temp;
    temp.real = c2.real++;
    temp.imag = c2.imag++;
    return temp;
}

int main()
{
    ComplexNum c1(1, 2), c2(6, 7), c3;
    c2 = ++c1;
    c3 = c2++;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}