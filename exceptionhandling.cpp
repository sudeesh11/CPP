// Exception Handling (try, catch, throw)
// divide by zero exception
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers " << endl;
    cin >> a >> b;
    int x = a - b;
    try
    {
        if (x != 0)
        {
            cout << "The value of a/x = " << a / x << endl;
        }
        else
            throw(x);
    }
    catch (int i)
    {
        cout << "Exception caught " << "X= " << x << endl;
    }
    return 0;
}