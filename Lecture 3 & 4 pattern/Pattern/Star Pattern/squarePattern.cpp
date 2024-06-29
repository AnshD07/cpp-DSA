#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int i, j = 1;
    while (j <= n)
    {
        i = 1;
        while (i <= n)
        {
            cout << "*"
                 << " ";
            i++;
        }
        cout << endl;
        j++;
    }

    // for (int j = 0; j < n; j++)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         cout << "*"
    //              << " ";
    //     }
    //     cout << endl;
    // }
}