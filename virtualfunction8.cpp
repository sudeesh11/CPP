#include <iostream>
using namespace std;

class complexnum
{
    double real, imag;

public:
    void getdata()
    {
        cout << "Enter real and imaginary parts" << endl;
        cin >> real >> imag;
    }
    void showdata()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};

class dist
{
    double meter, cm;

public:
    void getdata()
    {
        cout << "Enter meter and centimeter" << endl;
        cin >> meter >> cm;
    }
    void showdata()
    {
        cout << meter << " meters and " << cm << " centimeters" << endl;
    }
};

int main()
{
    complexnum *complexptr = new complexnum;
    dist *distptr = new dist;
    complexptr->getdata();
    distptr = reinterpret_cast<dist *>(complexptr);
    distptr->showdata();
    return 0;
}