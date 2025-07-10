#include<iostream>
using namespace std;

// class Test
// {
// public:
//     void print()
//     {
//         cout << "Non-static function called" << endl;
//     }
// };

// int main()
// {
//     Test::print(); //error
// }

class Test
{
public:
    static void show()
    {
        cout << "Static function called" << endl;
    }
};

int main()
{
    Test::show(); // shows output
}
