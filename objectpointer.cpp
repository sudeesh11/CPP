#include <iostream>
#include <cstring>
using namespace std;

class student
{
    char name[20];

public:
    void getdata(char n[])
    {
        strcpy(name, n);
    }

    void display()
    {
        cout << "Student name is " << name << endl;
    }
};

int main()
{
    student s;
    student *ptr = &s;
    char name[20] = "Sudeesh";
    ptr->getdata(name);
    ptr->display();

    return 0;
}