// scope resolution
#include <iostream>
using namespace std;

class student
{
    char name[20], address[20];
    int age, phone;

public:
    void setData();
    void getData();
};

void student::setData()
{
    cout << "Enter details of student(Name, Age, Phone No. and Address)" << endl;
    cin >> name >> age >> phone >> address;
}

void student::getData()
{
    cout << "Entered details are-" << endl
         << "Name - " << name << " Age - " << age << " Phone No. - " << phone << " Address - " << address;
}

int main()
{
    student s;
    s.setData();
    s.getData();
    return 0;
}
