// formatted input to a file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char name[20], address[20];
    int n, age;
    long int phone;

    ifstream in;
    in.open("studentdata.txt", ios::in);
    in >> name >> age >> address >> phone;
    while (in)
    {
        cout << name << '\t' << age << '\t' << address << '\t' << phone << endl;
        in >> name >> age >> address >> phone;
    }
    in.close();
    return 0;
}