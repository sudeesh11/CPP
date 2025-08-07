// writing file from console

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class student
{
    char name[20], address[20];
    int roll, marks;

public:
    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void putdata()
    {
        cout << left << setw(20) << name << setw(20) << address << setw(5) << roll << setw(5) << marks << endl;
    }
};

int main()
{
    student s;
    int n;
    fstream inout;
    inout.open("student.txt", ios::out);
    cout << "Enter no of students data you want to enter" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s.getdata();
        inout.write((char *)&s, sizeof(s));
    }
    inout.close();
    return 0;
}