/* Syntax -
classname operator existing_operator(classname obj)

using binary operater overloading in member function
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
    // classname operator existing_operator(classname obj)
    complexNum operator+(complexNum c)
    {
        complexNum temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main()
{
    complexNum c1(1, 2), c2(2, 3), c3(5, 6), c4;
    c4 = c1 + c2 + c3; // Evuluated from left to right c1+ c2 then c12+c3 then c4+c123
    c4.display(); 
    return 0; 
    
}