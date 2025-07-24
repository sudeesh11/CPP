// member overriding in inheritance

#include <iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};

class Dog
{
public:
    void sound()
    {
        cout << "Dog barks" << endl; // overrides Animal::sound()
    }
};

int main()
{
    Dog d;
    d.sound();
    return 0;
}