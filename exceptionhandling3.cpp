// multiple catch block

#include <iostream>
using namespace std;

int main()
{
    char name[] = "Pokhara";
    int a, b;
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
            if (i > 6)
            {
                throw(name[i]);
            }
            cout << name[i];
        }
    }
    catch (int i)
    {
        cout << "\nDivide by zero error!!" << endl;
    }
    catch (char ch)
    {
        cout << "\nOut of memory scope error!!" << endl;
    }

    return 0;
}