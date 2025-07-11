/* WAP in CPP to display the output using the OOP concept.
Output :
1
22
333
4444
55555
*/

#include <iostream>
using namespace std;

class pattern
{
    int num;

public:
    void getNum(int n)
    {
        num = n;
    }
    void display()
    {
        for (int i = 1; i <= num; i++)
        {
            for (int j = 1; j <= i; j++)
                cout << i;

            cout << endl;
        }
    }
};

int main()
{
    pattern p;
    int num;
    cout << "Enter value of n" << endl;
    cin >> num;
    p.getNum(num);
    p.display();
    return 0;
}