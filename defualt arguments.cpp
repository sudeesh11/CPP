#include <iostream>
using namespace std;

void SI(float p = 500, float t = 3, float r = 10) //(associacivity right to left)
{
    cout << (p * t * r) / 100 << endl;
}

// void SI(float p, float t, float r = 50)           // valid
// void SI(float p, float t = 10, float r = 50)      // valid
// void SI(float p = 500, float t, float r = 50)     // invalid
// void SI(float p, float t=2.5, float r)            //invalid
// void SI(float p=1000, float t=3, float r)         //invalid(must be defined right to left)

int main()
{
    SI(1000); // output 300 (associacivity left to right)
    SI();     // output 150
    return 0;
}

// #include <iostream>
// using namespace std;

// void SI(float p, float t, float r = 50)
// {
//     cout << (p * t * r) / 100 << endl;
// }

// int main()
// {
//     SI(1000, 1); // output 500
//     return 0;
// }
