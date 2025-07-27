// virtual destructors

#include <iostream>
using namespace std;

class base
{
public:
    virtual ~base()
    {
        cout << "Deleting virtual base object" << endl;
    }
};

class derived : public base
{
public:
    ~derived()
    {
        cout << "Deleting virtual derived object" << endl;
    }
};

int main()
{

    base *ptr = new derived;
    delete ptr;
    return 0;
}