// multiple inheritance

#include <iostream>
using namespace std;

class student
{
protected:
    string name;
    int roll;

public:
    void getstudent()
    {
        cout << "Enter name and roll number " << endl;
        cin >> name >> roll;
    }
};

class employee
{
protected:
    string role;
    int eid;

public:
    void getemployee()
    {
        cout << "Enter role and employee id " << endl;
        cin >> role >> eid;
    }
};

class officer : public student, public employee
{
private:
    string workinghour;

public:
    void getofficer()
    {
        cout << "Enter working hour" << endl;
        cin >> workinghour;
    }

    void display()
    {
        cout << "Displaying the details" << endl
             << "Name = " << name << endl
             << "Roll = " << roll << endl
             << "Role = " << role << endl
             << "Employee ID = " << eid << endl
             << "Working Hour = " << workinghour << endl;
    }
};

int main()
{
    officer o;
    o.getstudent();
    o.getemployee();
    o.getofficer();
    o.display();
    return 0;
}