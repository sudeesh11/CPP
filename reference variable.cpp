#include <iostream>
using namespace std;

int main()
{
    int a;
    int &b = a;

    b = 20;
    cout << a;
    return 0;
}
