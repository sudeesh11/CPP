// constructor and destructor in derived class (paramneterized constructor in base class)
// passing parameters to base class syntax;
// derivedclass( datatype dataname ) : baseclass (dataname)

#include <iostream>
using namespace std;

class A
{
protected:
    int num;

public:
    A(int a)
    {
        num = a;
        cout << "Inside base constructor" << endl;
    }
    ~A()
    {
        cout << "Inside base destructor" << endl;
    }

    void display()
    {
        cout << "Number is " << num << endl;
    }
};

class B : public A
{
public:
    B(int p) : A(p)
    {
        cout << "Inside derived constructor" << endl;
    }
    ~B()
    {
        cout << "Inside derived destructor" << endl;
    }
};

int main()
{
    B obj(10);
    obj.display();
    return 0;
}