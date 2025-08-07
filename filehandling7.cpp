// display floating number using scientific/ fixed

#include <iostream>
using namespace std;

int main()
{
    float m = 12345678933;
    cout.setf(ios::scientific, ios::floatfield);
    cout << m << endl;
    cout.unsetf(ios::scientific);
    cout.setf(ios::fixed, ios::floatfield);
    cout << m << endl;
    cout.unsetf(ios::fixed);
    return 0;
}