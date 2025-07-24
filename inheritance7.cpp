/* multilevel inheritance

WAP in CPP to illustrate concept of multilevel inheritance using following diagram
person
  ⬆
student
  ⬆
result
*/

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
};
class student : public person
{
protected:
    int roll;

public:
    void getstudent()
    {
        cout << "Enter roll number" << endl;
        cin >> roll;
    }
};

class result : public student
{
protected:
    int marks;

public:
    void getresult()
    {
        cout << "Enter marks" << endl;
        cin >> marks;
    }

    void displayresult()
    {
        cout << "Displaying student details" << endl
             << "Name - " << name << endl
             << "Age - " << age << endl
             << "Roll No - " << roll << endl
             << "Marks - " << marks << endl;
    }
};

int main()
{
    result r1;
    r1.getperson();
    r1.getstudent();
    r1.getresult();
    r1.displayresult();
    return 0;
}