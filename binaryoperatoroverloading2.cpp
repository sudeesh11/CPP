/* Syntax -
classname operator existing_operator(classname obj1, classname obj2)

using binary operater overloading in non-member/friend function
*/
#include <iostream>
using namespace std;

class complexNum
{
    int real, imag;

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
    friend complexNum operator+(complexNum, complexNum);
};
// classname operator existing_operator(classname obj1, classname obj2)
complexNum operator+(complexNum cc1, complexNum cc2)
{
    complexNum temp;
    temp.real = cc1.real + cc2.real;
    temp.imag = cc1.imag + cc2.imag;
    return temp;
}

int main()
{
    complexNum c1(1, 2), c2(3, 4), c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}