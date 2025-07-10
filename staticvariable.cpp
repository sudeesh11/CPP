
#include <iostream>
using namespace std;

class complexNum
{
    int real, imag;
    static int count;

public:
    void getData()
    {
        cout << "Enter real and imaginary number of the complex" << endl;
        cin >> real >> imag;
        count++;
    }

    void display()
    {
        cout << real << "+" << imag << "i" << endl;
        cout << "Count = " << count << endl;
    }
};

int complexNum::count;

int main()
{
    complexNum c1, c2, c3;
    c1.getData();
    c2.getData();
    c3.getData();
    c1.display();
    c2.display();
    c3.display();

    return 0;
}