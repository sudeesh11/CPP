#include <iostream>
using namespace std;

class student
{
    char name[20], roll[20];
    int age;

public:
    void getdata()
    {
        cin >> name >> age >> roll;
    }

    void displaydata()
    {
        cout << "Name- " << name << endl;
        cout << "Age- " << age << endl;
        cout << "Roll- " << roll << endl;
    }
};

int main()
{
    student s[3];
    cout << "Enter student details(name, age and roll)" << endl;
    s[0].getdata();
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter details again for other students" << endl;
        s[i].getdata();
    }
    cout << "Displaying student details" << endl;
    for (int i = 0; i <= 3; i++)
        s[i].displaydata();

    return 0;
}