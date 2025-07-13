/* WAP in CPP to concatenate two strings entered by the user using the concept of operator overloading */
// member function
#include <iostream>
using namespace std;

class Stringvalue
{
    char name[20];

public:
    void getdata(char character[20])
    {
        strcpy(name, character);
    }
    void display()
    {
        cout << name<<endl;
    }
    Stringvalue operator+(Stringvalue s)
    {
        Stringvalue ss;
        strcat(s.name, name);
        return s;
    }
};

int main()
{
    Stringvalue s1, s2, s3;
    char ss1[20], ss2[20];
    cout << "Enter first string- " << endl;
    cin >> ss2;
    cout << "Enter second string- " << endl;
    cin >> ss1;
    s1.getdata(ss1);
    s2.getdata(ss2);
    s3 = s1 + s2;
    s3.display();
    return 0;
}