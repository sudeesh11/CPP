// nested object

#include <iostream>
using namespace std;

class address
{
    char city[20], province[20], country[20];

public:
    void getAddress()
    {
        cout << "Enter the address(city, province and country)" << endl;
        cin >> city >> province >> country;
    }

    void displayAddress()
    {
        cout << "City: " << city << endl
             << "Province: " << province << endl
             << "Country: " << country << endl;
    }
};

class person
{
    char name[20], dob[20];
    int ctzn;
    address ad;

public:
    void getdetails()
    {
        cout << "Enter the name" << endl;
        cin >> name;
        cout << "Enter the date of birth(DOB)" << endl;
        cin >> dob;
        cout << "Enter the citizenship" << endl;
        cin >> ctzn;
        ad.getAddress();
    }

    void displaydetails()
    {
        cout << "Displaying person's details-----" << endl;
        cout << "Name: " << name << endl
             << "Date Of Birth(DOB): " << dob << endl
             << "Citizenship Number: " << ctzn << endl;
        ad.displayAddress();
    }
};

int main()
{
    person p;
    p.getdetails();
    p.displaydetails();
    return 0;
}