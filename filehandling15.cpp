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
        cout << left << setw(15) << name << setw(15) << address << setw(5) << roll << setw(5) << marks << endl;
    }
};

int main()
{
    student s;
    fstream inout;
    inout.open("student.txt", ios::in);
    while (inout.fail())
    {
        cout << "Error opening file" << endl;
        cout << "Exiting" << endl;
        exit(1);
    }
    while (inout.read((char *)&s, sizeof(s)))
    {
        s.putdata();
    }
    inout.close();
    return 0;
}