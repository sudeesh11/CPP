// Constructors - types
//  defualt
//  parametarized
//  copy

#include <iostream>
using namespace std;

class complexNum
{
    int real, imag;

public:
    complexNum() // defualt constructor
    {
        cout << "Inside defualt constructor" << endl;
        real = 0;
        imag = 0;
    }

    complexNum(int a, int b) // parametarized constructor
    {
        cout << "Inside parametarized constructor" << endl;
        real = a;
        imag = b;
    }

    complexNum(complexNum &copy) // copy constructor
    {
        cout << "Inside copy constructor" << endl;
        real = copy.real;
        imag = copy.imag;
    }

    ~complexNum()
    {
        cout << "Calling Destructor" << endl;
    }

    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main()
{
    complexNum c1;
    complexNum c2(1, 2);
    complexNum c3(c2);
    c1.display();
    c2.display();
    c3.display();

    return 0;
}