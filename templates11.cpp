// derived class template

#include <iostream>
using namespace std;

template <class T>
class base
{
protected:
    T x;
};

template <class T>
class derived : public base<T>
{
public:
    T func(T a)
    {
        this->x = a;
        return this->x;
    }
};

int main()
{
    derived<float> tf;
    cout << "The value is " << tf.func(5.3) << endl;
    return 0;
}