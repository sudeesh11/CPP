// pure virtual function

#include <iostream>
using namespace std;

class base // abstract class- any class having atleast pure virtual function and no object
{
public:
    virtual void show() = 0;
};

class derived1 : public base
{
public:
    void show()
    {
        cout << "Derived 1 class" << endl;
    }
};

class derived2 : public base
{
public:
    void show()
    {
        cout << "Derived 2 class" << endl;
    }
};

int main()
{
    base *ptr;
    derived1 d1;
    derived2 d2;
    ptr = &d1;
    ptr->show();
    ptr = &d2;
    ptr->show();
    return 0;
}