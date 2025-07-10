#include <iostream>
using namespace std;
#define PI 3.1415
int area(int r)
{
    return PI * r * r;
}

int area(int l, int b)
{
    return l * b;
}

int main()
{
    int length, breadth, radius;
    cout << "Enter the radius of circle." << endl;
    cin >> radius;

    cout << "Enter the length and breadth of rectangle." << endl;
    cin >> length >> breadth;

    cout << "The area of circle is " << area(radius) << endl;
    cout << "The area of rectangle is " << area(length, breadth) << endl;

    return 0;
}
