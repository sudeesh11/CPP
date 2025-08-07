// decimal to octal and hexadecimal using ios flags/ functions

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter a decimal number: ";
    cin >> n;
    cout.setf(ios::hex, ios::basefield);
    cout << "Hexadecimal equivalent is " << n;
    cout.unsetf(ios::hex);
    cout.setf(ios::oct, ios::basefield);
    cout << "\nOctal equivalent is " << n << endl;
    cout.unsetf(ios::oct);
    return 0;
}