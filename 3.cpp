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

    int returnCtzn()
    {
        return ctzn;
    }

    char *returnName()
    {
        return name;
    }

    char *returnDOB()
    {
        return dob;
    }
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

    void display(char name[], int ctzn, char dob[])
    {
        cout << "Displaying his details-" << endl
             << "Name-" << name << endl
             << "Citizenship Number- " << ctzn << endl
             << "Date Of Birth- " << dob << endl
             << "Qualification" << dqual << endl
             << "Speciality" << dspec << endl;
    }
};

int main()
{
    person p1;
    doctor d1;
    p1.getPerson();
    d1.getDoctor();
    d1.display(p1.returnName(), p1.returnCtzn(), p1.returnDOB());
    return 0;
}