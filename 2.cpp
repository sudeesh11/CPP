/* WAP to create a class LandMeasure that reads Ropani, Ana, Paisa and Dam as data members.Write a friend function to pass two objects of type LandMeasure and return their sum.(16 Ana = 1 Ropani, 4 Paisa = 1 Ana, 4 Dam = 1 Paisa)
 */

#include <iostream>
using namespace std;

class LandMeasure
{
    int ropani, ana, paisa, dam;

public:
    LandMeasure()
    {
        ropani = 0;
        ana = 0;
        paisa = 0;
        dam = 0;
    }

    LandMeasure(int ropani, int ana, int paisa, int dam)
    {
        this->ropani = ropani;
        this->ana = ana;
        this->paisa = paisa;
        this->dam = dam;
    }
    void display()
    {
        cout << "The sum is - " << endl
             << ropani << " Ropani" << endl
             << ana << " Ana" << endl
             << paisa << " Paisa" << endl
             << dam << " Dam" << endl;
    }
    friend LandMeasure add(LandMeasure, LandMeasure);
    friend LandMeasure convert(LandMeasure);
};

LandMeasure add(LandMeasure lm1, LandMeasure lm2)
{
    LandMeasure temp;
    temp.ropani = lm1.ropani + lm2.ropani;
    temp.ana = lm1.ana + lm2.ana;
    temp.paisa = lm1.paisa + lm2.paisa;
    temp.dam = lm1.dam + lm2.dam;
    return temp;
}

LandMeasure convert(LandMeasure lm)
{
    if (lm.dam >= 4)
    {
        lm.paisa += lm.dam / 4;
        lm.dam = lm.dam % 4;
    }
    if (lm.paisa >= 4)
    {
        lm.ana += lm.paisa / 4;
        lm.paisa = lm.paisa % 4;
    }
    if (lm.ana >= 16)
    {
        lm.ropani += lm.ana / 16;
        lm.ana = lm.ana % 16;
    }
    return lm;
}
int main()
{
    int r1, a1, p1, d1, r2, a2, p2, d2;
    cout << "Enter land units(Ropani, Ana, Paisa and Dam)" << endl;
    cin >> r1 >> a1 >> p1 >> d1;
    cout << "Enter land units again(Ropani, Ana, Paisa and Dam)" << endl;
    cin >> r2 >> a2 >> p2 >> d2;
    LandMeasure lm1(r1, a1, p1, d1), lm2(r2, a2, p2, d2), lm3;
    lm3 = add(lm1, lm2);
    lm3 = convert(lm3);
    lm3.display();
    return 0;
}