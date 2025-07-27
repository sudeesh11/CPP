// virtual function

#include <iostream>
using namespace std;

class base
{
public:
    virtual void show()
    {
        cout << "Base class" << endl;
    }
};

class derived1 : public base
{
public:
    void show()
    {
        cout << "Derived1 class" << endl;
    }
};

class derived2 : public base
{
public:
    void show()
    {
        cout << "Derived2 class" << endl;
    }
};

int main()
{
    base *ptr; // base class pointer
    derived1 d1;
    derived2 d2;
    ptr = &d1;
    ptr->show(); // will call to show() in base
    ptr = &d2;
    ptr->show(); // will call to show() in base
    return 0;
}