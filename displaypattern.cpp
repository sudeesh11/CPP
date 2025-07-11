/*   *
 ***
 *****
 *******
 *********    */

#include <iostream>
using namespace std;

class Display
{
    int num;

public:
    Display(int n)
    {
        num = n;
    }
    void output()
    {
        for (int i = 1; i <= num; i++)
        {
            //    for (int j = i; j < num; j++)
            for (int j = 1; j < 5 - i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main()
{
    Display d(5);
    d.output();
    return 0;
}