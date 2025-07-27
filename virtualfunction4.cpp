// Array of pointers to base class

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

class derived3 : public base
{
public:
    void show()
    {
        cout << "Derived3 class" << endl;
    }
};

int main()
{
    base *ptr[3];
    derived1 d1;
    derived2 d2;
    derived3 d3;
    ptr[0] = &d1;
    ptr[1] = &d2;
    ptr[2] = &d3;
    ptr[0]->show();
    ptr[1]->show();
    ptr[2]->show();
    return 0;
}