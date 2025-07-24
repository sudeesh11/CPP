// heirarcial inheritance
/*WAP in CPP to illustrate concept of heirarcial inheritance using following diagram
        employee
  ⬆        ⬆         ⬆
manager  teacher   secretery
*/

#include <iostream>
using namespace std;

class employee
{
protected:
    string employeename;

public:
    void getemployee()
    {
        cout << "Enter employee name - " << endl;
        cin >> employeename;
    }
};

class manager : public employee
{
    int workinghour;

public:
    void getmanager()
    {
        cout << "Enter working hour - " << endl;
        cin >> workinghour;
    }
    void displaymanager()
    {
        cout << "Displaying manager details -" << endl
             << "Name - " << employeename << endl
             << "Working hour - " << workinghour << endl;
    }
};

class teacher : public employee
{
    string subject;

public:
    void getteacher()
    {
        cout << "Enter subject - " << endl;
        cin >> subject;
    }
    void displayteacher()
    {
        cout << "Displaying teacher details -" << endl
             << "Name - " << employeename << endl
             << "Subject - " << subject << endl;
    }
};

class secretery : public employee
{
    int secreteryid;

public:
    void getsecretery()
    {
        cout << "Enter secretery ID - " << endl;
        cin >> secreteryid;
    }
    void displaysecretery()
    {
        cout << "Displaying secretery details -" << endl
             << "Name - " << employeename << endl
             << "Secretery ID - " << secreteryid << endl;
    }
};

int main()
{

    manager m;
    teacher t;
    secretery s;
    cout << "For manager" << endl;
    m.getemployee();
    m.getmanager();
    cout << "For teacher" << endl;
    t.getemployee();
    t.getteacher();
    cout << "For secretery" << endl;
    s.getemployee();
    s.getsecretery();

    m.displaymanager();

    t.displayteacher();

    s.displaysecretery();
    return 0;
}