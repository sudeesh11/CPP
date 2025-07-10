#include <iostream>
using namespace std;

int &maxm(int &a, int &b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b;
    cout << "Enter values of a and b-" << endl;
    cin >> a >> b;
    cout << "The maximum value is " << maxm(a, b);
    return 0;
}
