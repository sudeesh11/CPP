// function template

#include <iostream>
using namespace std;

template <class A>

A sum(A x, A y)
{
    A sum;
    sum = x + y;
    return sum;
}

int main()
{
    int a = 1, b = 2;
    float c = 2.3, d = 3.2;
    cout << "Sum of 2 integers values are " << sum(a, b) << endl;
    cout << "Sum of 2 float values are " << sum(c, d) << endl;
    return 0;
}