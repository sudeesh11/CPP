// uncaught exception 
//not using setterminate function, complier uses terminate function itself

#include <iostream>
using namespace std;

int main()
{
    cout << "Inside main function" << endl;
    try
    {
            cout << "Inside try block" << endl;
            throw 5;
    }
    catch (float x)
    {
        cout << "Exception caught" << endl;
    }
    return 0;
}