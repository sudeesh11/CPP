// Exceptions in destructors

#include <iostream>
using namespace std;

class hell
{
public:
    hell()
    {
        cout << "Inside constructor" << endl;
    }
    ~hell()
    {
        cout << "Inside Destructor" << endl;
        try
        {
            throw(1);
        }
        catch (int x)
        {
            cout << "Error code " << x << endl;
        }
    }
};

int main()
{
    hell h;
    return 0;
}