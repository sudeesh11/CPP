// divide by zero exception using function

#include <iostream>
using namespace std;

void divide(int a, int b, int c)
{
    cout << "Inside funxtion block" << endl;
    int x = a - b;
    if (x != 0)
    {
        cout << "The value of c/x is " << c / x << endl;
    }
    else
        throw(0);
}

int main()
{
    try
    {
        cout << "Inside try block" << endl;
        divide(30, 10, 20);
        divide(10, 10, 20);
    }
    catch (int i)
    {
        cout << "Exception caught " << "X= " << i << endl;
    }
    return 0;
}