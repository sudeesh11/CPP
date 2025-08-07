// WAP to read character entered by user

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;
    ifstream in;
    in.open("student.txt", ios::in);
    while (in.fail())
    {
        cout << "Error opening file" << endl;
        cout << "Exiting..." << endl;
        exit(1);
    }
    cout << "Content inside file" << endl;
    while (in.get(ch))
    {
        cout << ch;
    }
    in.close();
    return 0;
}