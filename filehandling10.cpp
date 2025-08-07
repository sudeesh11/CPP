// WAP to write character entered by user until enter key is pressed

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;
    ofstream out;
    cout << "Enter characters to save. press Enter to exit" << endl;
    out.open("student.txt", ios::out);
    while ((ch = cin.get()) != '\n')
    {
        // out.put(ch);
        out<<ch; //also works
    }
    out.close();
    return 0;
}