// multiple inheritance

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Inside base constructor A" << endl;
    }
    ~A()
    {
        cout << "Inside base destructor A" << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "Inside base constructor B" << endl;
    }
    ~B()
    {
        cout << "Inside base destructor B" << endl;
    }
};

class C : public A, public B
{
public:
    C()
    {
        cout << "Inside derived constructor" << endl;
    }
    ~C()
    {
        cout << "Inside derived destructor" << endl;
    }
};

int main()
{
    C obj;
    return 0;
}