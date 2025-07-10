#include <iostream>
using namespace std;
inline int si(int p, int t, int r)
{
    return (p * t * r) / 100;
}
int main()
{
    int p, t = 2, r = 5;
    cout << 'P' << '\t' << 'R' << '\t' << "SI" << endl;
    cout << "------------" << endl;
    for (p = 100; p <= 500; p = p + 100)
    {
        cout << p << '\t' << r << '\t' << si(p, t, r) << endl;
    }
    return 0;
}
