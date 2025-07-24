// constructor and destructor in derived class

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Inside base constructor" << endl;
    }
    ~A()
    {
        cout << "Inside base destructor" << endl;
    }
};

class B : public A
{
public:
    B()
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
    B obj;
    return 0;
}