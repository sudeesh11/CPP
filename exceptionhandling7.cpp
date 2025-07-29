// Exceptions specification for function
// valid C++ 98 code, not running in this compiler
#include <iostream>
using namespace std;
int divide(int a, int b) throw(int)
{
    try
    {
        if (b != 0)
        {
            return a / b;
        }
        throw b;
    }
}

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    int result = divide(a, b);
    cout << "The value of a/b is " << result << endl;
    catch (int x)
    {
        cout << "Divide by zero error!! X=" << x << endl;
    }
    return 0;
}