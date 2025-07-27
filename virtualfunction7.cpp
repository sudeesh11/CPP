// Reinterpret cast operator

#include <iostream>
using namespace std;

int main()
{
    int a = 65, *iptr = &a;
    char *cptr = reinterpret_cast<char *>(iptr);
    cout << "Value at cptr: " << *cptr << endl;
    return 0;
}