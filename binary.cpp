#include <iostream>
#include <string>

using namespace std;

class binary
{
    string s;

public:
    void read();
    void checkbinary();
    void ones();
    void display();
};

void binary ::read()
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::checkbinary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid Binary value !!" << endl;
            exit(0);
        }
    }
}

void binary::ones()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.checkbinary();
    b.ones();
    b.display();
    return 0;
}
