// #include <iostream>
// using namespace std;

// class classes
// {
// private:
//     int a, b, c;

// public:
//     int d, e;

//     void setdata(int a1, int b1, int c1)
//     {
//         a = a1;
//         b = b1;
//         c = c1;
//     }

//     void getdata()
//     {
//         cout << "The value of is" << a << endl;
//         cout << "The value of is" << b << endl;
//         cout << "The value of is" << c << endl;
//         cout << "The value of is" << d << endl;
//         cout << "The value of is" << e << endl;
//     }
// };

// int main()
// {
//     classes sudeesh;
//     sudeesh.d = 10;
//     sudeesh.e = 15;
//     sudeesh.setdata(10, 15, 20);
//     sudeesh.getdata();

//     return 0;
// }

#include <iostream>
using namespace std;

class classes
{
private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void getdata()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

int main()
{
    classes sudeesh;
    sudeesh.d = 10;
    sudeesh.e = 15;
    sudeesh.setdata(10, 15, 20);
    sudeesh.getdata();

    return 0;
}
