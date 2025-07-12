#include <iostream>
using namespace std;

class hello
{
    char character[20] = "Hello!";

public:
    void display()
    {
        cout << character << endl;
    }
};

int main()
{
    hello h;
    hello *ptr = &h;
    ptr->display();
}