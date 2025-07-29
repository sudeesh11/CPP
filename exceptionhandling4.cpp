// Catching all exceptions syntax; catch(...)

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char name[] = "Pokhara";
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    int x = a - b;
    try
    {
        if (x != 0)
        {
            cout << "The value of a/x is " << a / x << endl;
        }
        else
            throw(x);
        for (int i = 0; i < 20; i++)
        {
            while (i > 6)
            {
                throw(name[i]);
            }
            cout << name[i];
        }
    }
    catch (...)
    {
        cout << "\n Error occured" << endl;
    }
    return 0;
}