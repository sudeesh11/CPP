// user defined to user defined conversion(constructor and function)

#include <iostream>
using namespace std;

class A
{
    int x, y;

public:
    A()
    {
        x = 0;
        y = 0;
    }
    A(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "Two numbers are " << x << " and " << y << "." << endl;
    }
};

class B
{
    int p, q;

public:
    B()
    {
        p = 0;
        q = 0;
    }
    B(int a, int b)
    {
        p = a;
        q = b;
    }

    operator A()
    {
        return A(p, q);
    }
};

int main()
{
    A a;
    B b(10, 20);
    a = b;
    a.display();
    return 0;
}