#include <iostream>
using namespace std;
int main()
{
    // here i for Row and j for colums okay
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = ('A' + n - 1) + (j - i);
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}