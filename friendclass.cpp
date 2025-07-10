#include <iostream>
using namespace std;

class display;

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

    friend class display;
};

class display
{
public:
    void displayComplex(complexNum c1)
    {
        cout << "Input is " << c1.real << "+" << c1.imag << "i" << endl;
    }
};
int main()
{
    complexNum c1(5, 3);
    display d1;
    d1.displayComplex(c1);
    return 0;
}
