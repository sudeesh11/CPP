// class template

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

    void showdata()
    {
        cout << length << " length and " << breadth << " breadth." << endl;
    }
};

int main()
{
    int a, b;
    cout << "Enter length and breadth" << endl;
    cin >> a >> b;
    rectangle<int> R(a, b);
    R.showdata();
    return 0;
}