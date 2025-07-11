/* WAP in CPP to display the multiplication table of a number entered by the user using the OOP concept.
Example : n = 5
Output : 5 X 1 = 5
          5 X 2 = 10
          ....
          ....
          ....
          5 X 10 = 50
*/

#include <iostream>
using namespace std;

class Table
{
    int num;

public:
    void getNumber(int n)
    {
        num = n;
    }

    void displayTable()
    {
        cout << "Displaying multiplication table" << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << num << " * " << i << " = " << num * i << endl;
        }
    }
};

int main()
{
    Table t;
    int num;
    cout << "Enter a number for multiplication table-" << endl;
    cin >> num;
    t.getNumber(num);
    t.displayTable();
    return 0;
}