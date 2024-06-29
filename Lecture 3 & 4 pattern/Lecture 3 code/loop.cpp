#include <iostream>
using namespace std;
int main()
{

    /* Print 1 to N all Number*/

    // int n, i = 1;
    // cout << "Enter a Number : ";
    // cin >> n;

    // while (i <= n)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    /* print sum of 1 to N number */

    // int n, i = 1, sum = 0;
    // cout << "Enter a Number : ";
    // cin >> n;

    // while (i <= n)
    // {
    //     cout << i << " ";
    //     sum = sum + i;
    //     i++;
    // }

    // cout << "\n Sum of 1 to N is : " << sum;

    /* Find sum of 1 to N even Number*/
    int n, sum = 0, i = 2;
    cout << "Enter a Number ";
    cin >> n;

    while (i <= n)
    {
        cout << i << " ";
        i = i + 2;
    }
}