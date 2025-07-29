// Exception with arguments

#include <iostream>
using namespace std;

class Exception
{
    int i;
    float f;
    char c;
    friend int main();
};

int main()
{
    Exception e;
    // e.i = 1;
    // e.f=1.1;
    e.c ='A';
    try
    {
        throw e;
    }
    catch (Exception e)
    {
        if (e.i == 1)
        {
            cout << "Integer error caught" << endl;
        }
        if (e.f == 1.1f)
        {
            cout << "Float error caught" << endl;
        }
        if (e.c == 'A')
        {
            cout << "Character error caught" << endl;
        }
    }
    return 0;
}