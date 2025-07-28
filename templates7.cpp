// class template, multiple parameters

#include <iostream>
using namespace std;

template <class T1, class T2>
class dist
{
    T1 feet;
    T2 inch;

public:
    dist()
    {
        feet = 0;
        inch = 0;
    }
    dist(T1 a, T2 b)
    {
        feet = a;
        inch = b;
    }
    void showdist()
    {
        cout << feet << " feet and " << inch << " inches." << endl;
    }
};

int main()
{
    dist<int, float> di(3, 2.5);
    dist<int, int> df(1, 7);
    di.showdist();
    df.showdist();
    return 0;
}