// multiple datatypes, function template

#include <iostream>
using namespace std;

template <class T1, class T2, class T3>

void displaysize(T1 a, T2 b, T3 c)
{
    cout << "Size of int is " << sizeof(a) << " bytes" << endl;
    cout << "Size of float is " << sizeof(b) << " bytes" << endl;
    cout << "Size of char is " << sizeof(c) << " bytes" << endl;
}

int main()
{
    int a = 5;
    double b = 3.2;
    char c = 'A';
    displaysize(a, b, c);
    return 0;
}