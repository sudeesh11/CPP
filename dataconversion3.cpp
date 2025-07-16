
// Example: WAP in CPP to convert a distance entered by the user in meters to the distance in feet and inch using the concept of basic to user defined data conversion (basic to user defined)
#include <iostream>
using namespace std;

class Distance
{
    float feet, inch;

public:
    Distance()
    {
        feet = 0.0;
        inch = 0.0;
    }
    Distance(float m)
    {
        float feetf;
        feetf = m * 3.2808;
        feet = (int)feetf;
        inch = (feetf - feet) * 12;
    }

    void display()
    {
        cout << feet << " Feets and " << inch << " inches." << endl;
    }
};

int main()
{
    float meters;
    Distance d;
    cout << "Enter meters" << endl;
    cin >> meters;
    d = meters; // d.Distance(meters)
    d.display();
    return 0;
}