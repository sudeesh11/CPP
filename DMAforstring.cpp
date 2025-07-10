#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0, average, *ptr;
    ptr = new float[n];
    cout << "Enter no of terms" << endl;
    cin >> n;
    cout << "Enter terms" << endl;

    for (int i = 1; i <= n; i++)
    {
        cin >> ptr[i];
        sum = sum + ptr[i];
    }

    average = sum / n;
    cout << "Sum is " << sum << "and average is " << average << endl;
    delete[] ptr;
    return 0;
}
