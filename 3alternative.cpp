#include <iostream>
using namespace std;

class person
{
    int ctzn;
    char name[20], dob[10];

public:
    void getPerson()
    {
        cout << "Enter his name, date of birth and citizenship number" << endl;
        cin >> name >> dob >> ctzn;
    }

    friend class doctor;
};

class doctor
{
    char dqual[20], dspec[20];

public:
    void getDoctor()
    {
        cout << "Enter his qualification and speciality" << endl;
        cin >> dqual >> dspec;
    }

    void display(person p1)
    {
        cout << "Displaying his details -" << endl
             << "Name-" << p1.name << endl
             << "Citizenship Number- " << p1.ctzn << endl
             << "Date Of Birth- " << p1.dob << endl
             << "Qualification- " << dqual << endl
             << "Speciality- " << dspec << endl;
    }
};

int main()
{
    person p1;
    doctor d1;
    p1.getPerson();
    d1.getDoctor();
    d1.display(p1);
    return 0;
}