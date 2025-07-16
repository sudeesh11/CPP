// basic/primitive data types int float char
// user defined data types class struct

// basic to userdefined conversion (with the help of parameterized constructor)
// user defined to basic conversion
// user defined to user defined conversion

#include <iostream>
using namespace std;

class test
{
    int x, y;

public:
    test()
    {
        x = 0;
        y = 0;
    }
    test(int num)
    {
        x = num;
        y = num;
    }
    void display()
    {
        cout << "x= " << x << endl
             << "y= " << y << endl;
    }
};

int main()
{
    test t1;
    int num;
    cout << "Enter number ";
    cin >> num;
    t1 = num; // basic to userdefined // t1(num)
    t1.display();
    return 0;
}
