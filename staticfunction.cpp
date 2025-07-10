#include <iostream>
using namespace std;

class complexNum
{
    int real, imag;
    static int count;

public:
    static void incrementcount()
    {
        count++;
    }

    static void displayincrement()
    {
        cout << "Count is " << count << endl;
    }

    void getdata()
    {
        cout << "Enter real and imaginary part of complex number - " << endl;
        cin >> real >> imag;
        incrementcount();
    }

    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

int complexNum::count;
int main()
{
    complexNum c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c3.getdata();
    c1.display();
    c2.display();
    c3.display();
    // c1.displayincrement();
    complexNum::displayincrement();

    return 0;
}
