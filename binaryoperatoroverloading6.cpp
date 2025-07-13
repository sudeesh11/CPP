/* WAP in CPP to find the sum of two times using the concept of operator overloading(nonmember/friend function) */

#include <iostream>
using namespace std;

class Time
{
    int hour, min, sec;

public:
    void getdata()
    {
        cout << "Enter time(hour, minutes and seconds)" << endl;
        cin >> hour >> min >> sec;
    }

    void displaydata()
    {
        cout << hour << " hours, " << min << " minutes and " << sec << " seconds" << endl;
    }

    void convertdata()
    {
        if (sec > 60)
        {
            min += sec / 60;
            sec = sec % 60;
        }
        if (min > 60)
        {
            hour += min / 60;
            min = min % 60;
        }
    }

    friend Time operator+(Time, Time);
};

Time operator+(Time t1, Time t2)
{
    Time temp;
    temp.hour = t1.hour + t2.hour;
    temp.min = t1.min + t2.min;
    temp.sec = t1.sec + t2.sec;
    return temp;
}

int main()
{
    Time t1, t2, t3;
    t1.getdata();
    t2.getdata();
    t3 = t1 + t2;
    t3.convertdata();
    t3.displaydata();
    return 0;
}