// Inheritance( is-a relationship)
// Composition( has-a relationship)

// composition (maruti has a engine)
#include <iostream>
using namespace std;

class engine
{
public:
    void enginestart()
    {
        cout << "Engine started" << endl;
    }
};

class Maruti
{
    engine K10B;

public:
    void start()
    {
        K10B.enginestart();
        cout << "Car started" << endl;
    }
};

int main()
{
    Maruti Swift;
    Swift.start();
    return 0;
}