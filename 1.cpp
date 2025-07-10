/* WAP in CPP to find the sum of two times entered by the user using the concept of friend function.
 */

#include <iostream>
using namespace std;

class timee
{
    int hour, min, sec;

public:
    timee()
    {
        hour = 0;
        min = 0;
        sec = 0;
    }
    timee(int a, int b, int c)
    {
        hour = a;
        min = b;
        sec = c;
    }

    void display()
    {
        cout << "The sum of time is " << hour << " hour " << min << " minutes and " << sec << " seconds." << endl;
    }
    friend timee timesum(timee, timee);
    friend timee timeconversion(timee);
};

timee timeconversion(timee t)
{
    if (t.sec >= 60)
    {
        t.min += t.sec / 60;
        t.sec = t.sec % 60;
    }
    if (t.min >= 60)
    {
        t.hour += t.min / 60;
        t.min = t.min % 60;
    }
    return t;
};
timee timesum(timee tt1, timee tt2)
{
    timee temp;
    temp.hour = tt1.hour + tt2.hour;
    temp.min = tt1.min + tt2.min;
    temp.sec = tt1.sec + tt2.sec;
    return temp;
}

int main()
{
    int h1, m1, s1, h2, m2, s2;
    cout << "Enter time in order {HH-MM-SS}" << endl;
    cin >> h1 >> m1 >> s1;
    cout << "Enter another time in order {HH-MM-SS}" << endl;
    cin >> h2 >> m2 >> s2;
    timee t1(h1, m1, s1), t2(h2, m2, s2), t3;
    t3 = timesum(t1, t2);
    t3 = timeconversion(t3);
    t3.display();
    return 0;
}