// non template type argument

#include <iostream>
using namespace std;

template <class T, int size>
class Array
{
    T arr[size];
    T max;
    T min;

public:
    void input()
    {
        cout << "Enter " << size << " values." << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    void maxm()
    {
        max = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
    }

    void minm()
    {
        min = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
        }
    }

    void output()
    {
        cout << "Greatest is " << max << " and smallest is " << min << endl;
    }
};

int main()
{
    Array<int, 10> t1;
    t1.input();
    t1.maxm();
    t1.minm();
    t1.output();
    return 0;
}