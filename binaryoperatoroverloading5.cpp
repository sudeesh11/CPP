/* WAP in CPP to find the sum of two times using the concept of operator overloading(member function) */

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
        if (sec >= 60)
        {
            min += sec / 60;
            sec = sec % 60;
        }
        if (min >= 60)
        {
            hour += min / 60;
            min = min % 60;
        }
    }

    Time operator+(Time t)
    {
        Time temp;
        temp.hour = hour + t.hour;
        temp.min = min + t.min;
        temp.sec = sec + t.sec;
        return temp;
    }
};

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