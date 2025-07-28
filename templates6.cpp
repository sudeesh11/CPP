#include <iostream>
using namespace std;

template <class T>
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

    T area()
    {
        // T area;
        // area=length*breadth;
        // return area;
        return length * breadth;
    }
};

int main()
{
    rectangle<int> ri(3, 4);
    rectangle<float> rf(2.3, 6.1);
    cout << "The area of integers is " << ri.area() << endl;
    cout << "The area of float is " << rf.area() << endl;
    return 0;
}