// Complete File I/O Program

// Write a menu driven program in C++ to illustrate the concept of complete input/output operations on data files.
// Use a class named “student” with members: name roll marks address to represent a record.

// Your program must be able to do the following file operations:
// 	1.	Write n records to the file
// 	2.	Read current records stored on the file
// 	3.	Update a record on the file
// 	4.	Search a record on the file
// 	5.	Modify a record on the file
// 	6.	Delete a record on the file
// 	7.	Compute the number of records and total file size

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class student
{
    char name[10], address[15];
    int roll, marks;

public:
    void getdata()
    {
        cout << "Enter the roll: ";
        cin >> roll;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter the marks: ";
        cin >> marks;
    }

    void putdata()
    {
        cout << left << setw(5) << roll << setw(16) << name << setw(16) << address << setw(5) << marks << endl;
    }

    int getroll()
    {
        return roll;
    }
};

void format()
{
    cout << endl
         << left << setw(5) << "ROLL" << setw(16) << "NAME" << setw(16) << "ADDRESS" << setw(5) << "MARKS" << endl;
}

int main()
{
    student s;
    int m;
    fstream inout;
    cout << "Choose what you wish to operate" << endl;
    cout << "1.	Write n records to the file" << endl;
    cout << "2.	Read current records stored on the file" << endl;
    cout << "3.	Update a record on the file" << endl;
    cout << "4.	Search a record on the file" << endl;
    cout << "5.	Modify a record on the file" << endl;
    cout << "6.	Delete a record on the file" << endl;
    cout << "7.	Compute the number of records and total file size" << endl;
    cin >> m;
    switch (m)
    {
    case 1:
    {
        int n;
        inout.open("student.txt", ios::out);
        cout << "\nEnter number of students record you wish to save";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            s.getdata();
            inout.write((char *)&s, sizeof(s));
        }
        inout.close();
        break;
    }
    case 2:
    {
        inout.open("student.txt", ios::in);
        format();
        if (!inout)
        {
            cout << "\nError opening file!!!" << endl;
        }
        while (inout.read((char *)&s, sizeof(s)))
        {
            s.putdata();
        }
        break;
    }
    case 3:
    {
        int n;
        inout.open("student.txt", ios::app);
        cout << "Enter number of students record you wish to add" << endl;
        cin >> n;
        if (!inout)
        {
            cout << "Error opening file!!!" << endl;
        }
        for (int i = 0; i < n; i++)
        {
            s.getdata();
            inout.write((char *)&s, sizeof(s));
        }
        inout.close();
        break;
    }
    case 4:
    {
        int roll;
        bool found = false;
        inout.open("student.txt", ios::in);
        cout << "\nEnter roll number you wish to search details ";
        cin >> roll;
        while (inout.read((char *)&s, sizeof(s)))
        {
            if (roll == s.getroll())
            {
                found = true;
                format();
                s.putdata();
                break;
            }
        }
        if (!found)
        {
            cout << "\nCouldn't find roll number " << roll << "!!!" << endl;
        }
        inout.close();
        break;
    }
    case 5:
    {
        int roll;
        bool found = false;
        inout.open("student.txt", ios::in | ios::out);
        cout << "\nEnter the roll number you wish to modify details ";
        cin >> roll;
        while (inout.read((char *)&s, sizeof(s)))
        {
            bool getrolll = false;
            if (roll == s.getroll())
            {
                found = true;
                int position = inout.tellg();
                inout.seekp(position - sizeof(s));
                s.getdata();
                inout.write((char *)&s, sizeof(s));
                break;
            }
        }
        if (!found)
        {
            cout << "\nCouldn't find roll number " << roll << "!!!" << endl;
        }
        inout.close();
        break;
    }
    case 6:
    {
        ifstream in("student.txt", ios::in);
        ofstream out("temp.txt", ios::out);
        int roll;
        bool found = false;
        cout << "\nEnter roll number you wish to delete details ";
        cin >> roll;
        while (in.read((char *)&s, sizeof(s)))
        {
            if (roll == s.getroll())
            {
                found = true;
                cout << "\nDeleting following details" << endl;
                format();
                s.putdata();
                continue;
            }
            out.write((char *)&s, sizeof(s));
        }
        if (!found)
        {
            cout << "\nCouldn't find roll number " << roll << "!!!" << endl;
        }
        in.close();
        out.close();
        remove("student.txt");
        rename("temp.txt", "student.txt");
        break;
    }
    case 7:
    {
        inout.open("student.txt", ios::in);
        inout.seekp(0, ios::end);
        int position = inout.tellg();
        cout << "\nNumber of records: " << (position / sizeof(s)) << endl
             << "Total file size: " << position << endl;
        inout.close();
        break;
    }
    default:
    {
        cout << "\nInvalid operation!" << endl;
    }
    }
}