// left justify and right justify using ios flags and functions
// by defualt right

#include <iostream>
using namespace std;

int main()
{
    cout.width(40);
    cout.setf(ios::left);
    cout << "This is left justified text." << endl;
    cout.unsetf(ios::left);
    cout.width(40);
    cout << "This is right justified text."; // right is set by defualt
    return 0;
}