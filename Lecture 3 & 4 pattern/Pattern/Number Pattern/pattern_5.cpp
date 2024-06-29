#include <iostream>
using namespace std;
int main()
{
    /*
    print below pattern

    *
    * *
    * * *
    * * * *

    */

    int n;
    cout << "Enter a Number : ";
    cin >> n;

    int row = 1, col = 1;
    while (row <= n)
    {
        col = 1;
        while (col <= row)
        {
            cout << "*"
                 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}