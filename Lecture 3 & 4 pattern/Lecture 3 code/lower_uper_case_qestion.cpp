#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter Any character for checking : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "this is Lower case";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "this is Upper case";
    }
    else if (ch <= '9' && ch >= '0')
    {
        cout << "this is Between zero and nine";
    }
}