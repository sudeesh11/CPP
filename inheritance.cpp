/* WAP in CPP to illustrate concept of single inheritance using following diagram
student
  ⬆
leader
*/

#include <iostream>
using namespace std;

class student
{
protected:
    char name[20], address[20], phone[15];
    int roll;

public:
    void getstudent()
    {
        cout << "Enter name, address, roll and phone number" << endl;
        cin >> name >> address >> roll >> phone;
    }
};

class leader : public student
{
    char clubname[20], clubid[20];

public:
    void getleader()
    {
        cout << "Enter club name and club id" << endl;
        cin >> clubname >> clubid;
    }

    void displayleader()
    {
        cout << "Displaying club details" << endl
             << "Name : " << name << endl
             << "Address : " << address << endl
             << "Roll : " << roll << endl
             << "Phone : " << phone << endl
             << "Club Name : " << clubname << endl
             << "Club ID : " << clubid << endl
             << "Position : Leader" << endl;
    }
};

int main()
{
    leader l;
    l.getstudent();
    l.getleader();
    l.displayleader();
    return 0;
}