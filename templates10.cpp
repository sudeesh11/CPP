// defualt argument with class templates

#include <iostream>
using namespace std;

template <class T = int>
class rectangle
{
    T length, breadth;

public:
    rectangle()
    {
        length = 0;
        breadth = 0;
    }

    rectangle(T a, T b)
    {
        length = a;
        breadth = b;
    }

    void showarea()
    {
        cout << "The area is " << length * breadth << endl;
    }
};

int main()
{
    rectangle<int> t1(3, 3);
    rectangle<> t2(5, 6);
    rectangle<float> t3(1.1, 4.4);

    t1.showarea();
    t2.showarea();
    t3.showarea();
    return 0;
}