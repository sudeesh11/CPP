#include <iostream>
using namespace std;

class Distance
{
    int meter;

public:
    Distance()
    {
        meter = 0;
    }
    explicit Distance(int m) // explicit constructor doesn't let inplicit data conversion using compilers
    {
        meter = m;
    }
    void display()
    {
        cout << "Distance = " << meter << " meters." << endl;
    }
};

int main()
{
    Distance d;
    int num = 10;
    d = num; // error
    // explicit constructor doesn't let inplicit data conversion using compilers
    d.display();
    return 0;
}