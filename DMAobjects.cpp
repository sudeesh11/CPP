#include <iostream>
using namespace std;

class book
{
    char bookname[20], bookpublisher[20];

public:
    void getdetail(int i)
    {
        cout << "\nBook " << i + 1 << ":" << endl;
        cout << "Enter title: ";
        cin >> bookname;
        cout << "Enter author: ";
        cin >> bookpublisher;
    }

    void displaydetail()
    {
        cout << "Title: " << bookname << ", Author: " << bookpublisher << endl;
    }
};

int main()
{
    int n;
    cout << "How many books do you want to register?";
    cin >> n;

    book *books = new book[n];

    cout << "\n--- Enter Book Details ---\n";
    for (int i = 0; i < n; i++)
        books[i].getdetail(i);

    cout << "\n --- Book List ---\n";
    for (int i = 0; i < n; i++)
        books[i].displaydetail();

    delete[] books;
    return 0;
}