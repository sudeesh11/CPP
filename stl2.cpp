#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> values;
    for (int i = 0; i < 6; i++)
    {
        values.push_back(i * i);
    }

    for (int i = 0; i < 6; i++)
    {
        cout << values[i] << endl;
    }

    return 0;
}