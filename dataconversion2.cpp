// user defined to basic conversion
// syntax for typecasting function
// operator destinationreturntype(){
//    // return ;
// }

#include <iostream>
using namespace std;

class test
{
    int x, y;

public:
    void getdata()
    {
        cout << "Enter x and y" << endl;
        cin >> x >> y;
    }

    operator int()
    {
        return x;
    }
};

int main()
{
    test t1;
    int num;
    t1.getdata();
    num = t1; // user defined to basic conversion(t1.operatorint();)
    cout << "The number is " << num << endl;
    return 0;
}