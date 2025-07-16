// Example : WAP in CPP to convert the co - ordinates from cartesian system to polar system using the concept of user defined to user defined conversion by writing conversion routine in source class.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class polar
{
    float r, theta;

public:
    polar()
    {
        r = 0.0;
        theta = 0.0;
    }
    polar(float rad, float thetha)
    {
        r = rad;
        theta = thetha;
    }
    void showdata()
    {
        cout << "Radius = " << setprecision(4) << r << endl
             << "Angle = " << setprecision(4) << theta << endl;
    }
};

class rectangle
{
    float x, y;

public:
    rectangle()
    {
        x = 0;
        y = 0;
    }
    rectangle(float a, float b)
    {
        x = a;
        y = b;
    }
    operator polar()
    {
        float radius, theta;
        radius = sqrt(pow(x, 2) + pow(y, 2));
        // theta = atan(x / y) * (180/3.1415);
        theta = atan2(y, x) * (180 / 3.1415);
        return polar(radius, theta);
    }
};

int main()
{
    polar p;
    rectangle r(1, 1.73);
    p = r;
    p.showdata();
    return 0;
}