// unformatted i/o multiple character

#include <iostream>
using namespace std;

int main()
{
    char ch[20];
    cin.getline(ch, 8);
    cout.write(ch, 8);
    return 0;
}