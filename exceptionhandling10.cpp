// uncaught exception
// using setterminate function

#include <iostream>
using namespace std;

void exceptionhandle()
{
    cout << "Unhandled exception" << endl;
    cout << "Terminating..." << endl;
}
int main()
{
    cout << "Inside main function" << endl;
    try
    {
        set_terminate(exceptionhandle);

        cout << "Inside try block" << endl;
        throw 5;
    }
    // catch (int x)
    catch (float x)
    {
        cout << "Exception caught" << endl;
    }
    return 0;
}