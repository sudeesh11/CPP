// unexpected exception

#include <iostream>
using namespace std;

int main() throw(int, float)
{
    cout << "Inside main function" << endl;
    try
    {
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