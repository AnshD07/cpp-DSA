#include <iostream>
using namespace std;
int main()
{
    /*
     3 2 1
     3 2 1
     3 2 1
    */
    int n;
    cout << "Enter a Number  : ";
    cin >> n;

    /*
    With the Help Of Reverse Loops
    */

    // int i = n;
    // int j = 1;
    // while (j <= n)
    // {
    //     i = n;
    //     while (i > 0)
    //     {
    //         cout << i << " ";
    //         i--;
    //     }
    //     cout << endl;
    //     j++;
    // }

    /*
    Without Use of Reverse Loops
    */

    int i = 1, j = 1;
    while (j <= n)
    {
        i = 1;
        while (i <= n)
        {
            cout << n - i + 1 << " ";
            i++;
        }
        cout << endl;
        j++;
    }
}