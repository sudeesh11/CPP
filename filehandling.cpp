// handling error inputting numbers

#include <iostream>
using namespace std;

int main()
{
    int i;
    while (true)
    {
        cout << "\nEnter an integer: ";
        cin >> i;
        if (cin.good())
        {
            cin.ignore(1000, '\n');
            break;
        }
        cin.clear();
        cout << "Invalid input!";
        cin.ignore(1000, '\n');
    }
    cout << "Integer is " << i << endl;
    return 0;
}
