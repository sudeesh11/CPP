// rethrowing an exception

#include <iostream>
using namespace std;

void rethrowdemo(int a, int b)
{
    try
    {
        if (b != 0)
        {
            cout << "The value of x/y is " << a / b << endl;
        }
        else
            throw(b);
    }
    catch (int q)
    {
        cout << "Cannot handle the error!! Rethrowing" << endl;
        throw;
    }
}
int main()
{
    int a, b;
    cout << "Enter divident" << endl;
    cin >> a;
    cout << "Enter divisor" << endl;
    cin >> b;
    try
    {
        rethrowdemo(a, b);
    }
    catch (int q)
    {
        cout << "Divide by zero error!!" << endl;
    }
    return 0;
}