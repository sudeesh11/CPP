#include <iostream>
using namespace std;

class marks
{
    int subject;
    int *mark;

public:
    marks(int n)
    {
        subject = n;
        mark = new int[subject];
        cout << "Memory allocated" << enmdl;
    }

    void getmarks()
    {
        cout << "Enter marks of students" << endl;
        for (int i = 0; i < subject; i++)
            cin >> mark[i];
    }

    void displaymarks()
    {
        cout << "Displaying marks of students" << endl;
        for (int i = 0; i < subject; i++)
            cout << mark[i] << endl;
    }

    ~marks()
    {
        delete[] mark;
        cout << "Memory released" << endl;
    }
};

int main()
{
    int n;
    cout << "Enter no. of subjects - ";
    cin >> n;
    marks m(n);
    m.getmarks();
    m.displaymarks();
    return 0;
}