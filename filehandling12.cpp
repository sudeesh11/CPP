// formatted output to a file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char name[20], address[20];
    int n, age;
    long int phone;

    ofstream out;
    out.open("studentdata.txt", ios::out);
    cout << "Enter no of students data you want to enter: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\nEnter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter phone number: ";
        cin >> phone;
        out << name << '\t' << age << '\t' << address << '\t' << phone << endl;
    }
    cout << "\nFile written!";
    out.close();
    return 0;
}