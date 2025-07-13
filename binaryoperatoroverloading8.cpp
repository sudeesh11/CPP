/* WAP in CPP to concatenate two strings entered by the user using the concept of operator overloading */
// nonmember/friend function

#include <iostream>
using namespace std;

class String
{
    char name[20];

public:
    void getname()
    {
        cin >> name;
    }

    void displayname()
    {
        cout << "The full name is " << name << "." << endl;
    }

    friend String operator+(String, String);
};

String operator+(String s1, String s2)
{
    String temp;
    strcpy(temp.name, s1.name);
    strcat(temp.name, " ");
    strcat(temp.name, s2.name);
    return temp;
}

int main()
{
    String s1, s2, s3;
    cout << "Enter first name" << endl;
    s1.getname();
    cout << "Enter second name" << endl;
    s2.getname();

    s3 = s1 + s2;
    s3.displayname();
    return 0;
}