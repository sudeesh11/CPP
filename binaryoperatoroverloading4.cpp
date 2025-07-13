/*
WAP in CPP to find the product of two 3 by 3 matrices using the concept of binary operator overloading with member function.
*/

#include <iostream>
using namespace std;

class matrix
{
    int mat[3][3];

public:
    void getdata()
    {
        cout << "Enter matrix elements" << endl;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> mat[i][j];
    }

    void displaydata()
    {
        cout << "Displaying matrix" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
    matrix operator*(matrix m)
    {
        matrix temp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int sum = 0;
                for (int k = 0; k < 3; k++)
                {
                    sum += mat[i][k] * m.mat[k][j];
                }
                temp.mat[i][j] = sum;
            }
        }
        return temp;
    }
};

int main()
{
    matrix m1, m2, m3;
    m1.getdata();
    m2.getdata();
    m3 = m1 * m2;
    m3.displaydata();

    return 0;
}