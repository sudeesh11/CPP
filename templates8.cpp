// non template type argument

#include <iostream>
using namespace std;

template <class T, int size>
class Array
{
    T arr[size];

public:
    void show()
    {
        cout << "Size of array is " << size << endl;
    }
};

int main()
{
    Array<int, 20> ti;
    Array<float, 10> tf;
    Array<char, 5> tc;

    ti.show();
    tf.show();
    tc.show();

    return 0;
}