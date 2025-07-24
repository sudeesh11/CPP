#include <iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;

public:
    void getperson()
    {
        cout << "Enter name and age" << endl;
        cin >> name >> age;
    }
    void showperson()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl;
    }
};

class doctor : virtual public person
{
protected:
    string specialization, qualification;

public:
    void getdoctor()
    {
        cout << "Enter doctor specialization and qualification" << endl;
        cin >> specialization >> qualification;
    }
    void showdoctor()
    {
        cout << "Specialization: " << specialization << endl
             << "Qualification: " << qualification << endl;
    }
};

class patient : virtual public person
{
protected:
    string disease, pid;

public:
    void getpatient()
    {
        cout << "Enter patient ID and disease" << endl;
        cin >> pid >> disease;
    }
    void showpatient()
    {
        cout << "Patient ID: " << pid << endl
             << "Disease: " << disease << endl;
    }
};

class doctorpatient : public patient, public doctor
{
public:
    void getdata()
    {
        getperson();
        getdoctor();
        getpatient();
    }
    void displaydata()
    {
        showperson();
        showdoctor();
        showpatient();
    }
};

int main()
{
    doctorpatient dp;
    dp.getdata();
    dp.displaydata();
    return 0;
}