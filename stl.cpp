// standard template library(stl)

#include <iostream>
#include <list>
#include <cstring>

using namespace std;

int main()
{
    list<string> l;
    l.push_back("Sudeesh");
    l.push_back("Dinesh");
    l.push_back("Sabina");
    l.push_back("Sushma");
    l.sort();
    while (!l.empty())
    {
        cout << l.front() << endl;
        l.pop_front();
    }
}