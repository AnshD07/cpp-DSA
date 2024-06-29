#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;
    // cout << "This is cin For Take Input From User " << endl;

    if (n >= 0)
    {
        cout << "Number is Positive Or Zero";
    }
    else
    {
        cout << "Number is Negative";
    }
}