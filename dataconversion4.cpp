// Example : WAP in CPP to convert a distance in feets and inches into meters using the concept of user defined to basic data (user defined to basic)

#include <iostream>
using namespace std;

class Distance
{
    float feet, inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }

    void getdata()
    {
        cout << "Enter feet and inches" << endl;
        cin >> feet >> inch;
    }

    operator float()
    {
        float meter;
        float totalfeet = feet + inch / 12;
        meter = totalfeet / 3.2828;
        return meter;
    }
};

int main()
{
    Distance d;
    float meter;
    d.getdata();
    meter = d; //meter.operatorfloat()
    cout << "Total meter is " << meter << endl;
    return 0;
}