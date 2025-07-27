// Run time type information(rtti)
//dynamic casting

#include <iostream>
#include <typeinfo> //syntax; must for rtti
using namespace std;

class base
{
public:
    virtual void func() {}
};

class derived : public base
{
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;
    derived *dptr = dynamic_cast<derived *>(bptr);
    if (dptr != NULL)
    {
        cout << "Works!!" << endl;
    }
    else
    {
        cout << "Dynamic Casting not possible" << endl;
    }
    return 0;
}