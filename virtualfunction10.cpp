// Run time type information(rtti)
// typeid

#include <iostream>
#include <typeinfo>

using namespace std;

class base
{
public:
    virtual void func() {}
};

class complexnum : public base
{
    float real, imag;

public:
    void getdata()
    {
        cout << "Enter real and imaginary part" << endl;
        cin >> real >> imag;
    }
    void showdata()
    {
        cout << real << "+" << imag << "i";
    }
};

int main()
{
    int i, *iptr;
    float f, *fptr;
    complexnum complex, *complexptr;
    cout << "The type of i is " << typeid(i).name() << endl;
    cout << "The type of iptr is " << typeid(iptr).name() << endl;
    cout << "The type of f is " << typeid(f).name() << endl;
    cout << "The type of fptr is " << typeid(fptr).name() << endl;
    cout << "The type of complex is " << typeid(complex).name() << endl;
    cout << "The type of complexptr is " << typeid(complexptr).name() << endl;
    return 0;
}