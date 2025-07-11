#include <iostream>
#include <string>
using namespace std;

class stringValue
{
    string s1, s2;

public:
    void getData()
    {
        cout << "Enter two strings to be concatenated" << endl;
        cin >> s1 >> s2;
    }
    void concatenate()
    {
        s1 = s1 + s2;
    }
    void display()
    {
        cout << "The concatenated value is " << s1 << endl;
    }
};

int main()
{
    stringValue ss1;
    ss1.getData();
    ss1.concatenate();
    ss1.display();
    return 0;
}