// Example : WAP in CPP to convert the co - ordinates from cartesian system to polar system using the concept of user defined to user defined conversion by writing conversion routine in destination class.

#include <iostream>
#include <cmath>
using namespace std;

class rectangular
{
    float x, y;

public:
    rectangular()
    {
        x = 0.0;
        y = 0.0;
    }
    rectangular(float a, float b)
    {
        x = a;
        y = b;
    }
    float returnx()
    {
        return x;
    }
    float returny()
    {
        return y;
    }
};

class polar
{
    float r, theta;

public:
    polar()
    {
        r = 0.0;
        theta = 0.0;
    }

    polar(rectangular rect)
    {
        r = sqrt(pow(rect.returnx(), 2) + pow(rect.returny(), 2));
        theta = atan(rect.returny() / rect.returnx()) * (180 / 3.1415);
    }
    void display()
    {
        cout << "radius= " << r << "\ntheta= " << theta << endl;
    }
};

int main()
{
    rectangular r(3, 4);
    polar p;
    p = r;
    p.display();
    return 0;
}