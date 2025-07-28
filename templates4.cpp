// template function overloading with normal function

#include <iostream>
using namespace std;

template <class T>
T greatest(T a, T b, T c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int greatest(int a, int b)
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
    int a, b, c;
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;
    cout << "The greatest number among three is " << greatest(a, b, c) << endl;
    cout << "The greatest number among a and d b is " << greatest(a, b) << endl;
    return 0;
}