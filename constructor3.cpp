#include <iostream>
using namespace std;

class complexNum
{
private:
    int real, imag;

public:
    complexNum()
    {
        real = 5;
        imag = 2;
    }

    complexNum(complexNum &copy)
    {
        real = copy.real;
        imag = copy.imag;
    }

    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main()
{
    complexNum c1, c2(c1);
    c1.display();
    c2.display();
}