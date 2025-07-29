// Exceptions in constructors

#include <iostream>
using namespace std;

class hell
{
public:
    hell()
    {
        int x = 1;
        cout << "Constructor called " << endl;
        throw x;
    }
};

int main()
{
    try
    {
        hell h;
    }
    catch (int x)
    {
        cout << "Exception caught" << " Error code " << x;
    }
    return 0;
}