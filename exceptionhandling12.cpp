// unexpected exception

#include <iostream>
using namespace std;

void func()
{
    cout << "Unexpected exception" << endl
         << "Terminating!!!" << endl;
}
int main() throw(int, float)
{
    cout << "Inside main function" << endl;
    try
    {
        set_unexpected(func);
        cout << "Inside try block" << endl;
        throw 'z';
    }
    catch (int a)
    {
        cout << "int exception caught" << endl;
    }

    catch (float b)
    {
        cout << "float exception caught" << endl;
    }

    return 0;
}