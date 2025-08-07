// testing error during file io operation

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream inout;
    inout.open("dat.txt", ios::in);
    if (!inout)
    {
        cout << "Failed opening file" << endl;
    }
    else
    {
        cout << "File opened successfully" << endl;
    }
    cout << "rdstate(): " << inout.rdstate() << endl;
    cout << "eof(): " << inout.eof() << endl;
    cout << "fail(): " << inout.fail() << endl;
    cout << "good(): " << inout.good() << endl;
    cout << "bad(): " << inout.bad() << endl;
    return 0;
}