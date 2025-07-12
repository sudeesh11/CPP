#include <iostream>
using namespace std;

class marks
{
    int mark;
    int *subject;

public:
    marks(int n)
    {
        mark = n;
        subject = new int[n];
    }

    void getmark()
    {
        cout << "Enter marks in each subjects -" << endl;
        for (int i = 0; i < mark; i++)
            cin >> subject[i];
    }

    void displaymark()
    {
        cout << "Displaying marks in each subjects -" << endl;
        for (int i = 0; i < mark; i++)
            cout << subject[i] << endl;
    }

    ~marks()
    {
        delete[] subject;
        cout << "Releasing memory for marks" << endl;
    }
};

int main()
{
    int num;
    cout << "Enter no. of subjects" << endl;
    cin >> num;
    marks m(num);
    m.getmark();
    m.displaymark();
    return 0;
}