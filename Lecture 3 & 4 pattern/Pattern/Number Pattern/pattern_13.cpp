#include <iostream>
using namespace std;
int main()
{
    /*

    A B C
    B C D
    D E F

    */
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    /* Best Time Complesity reduce Formula making Be god*/
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    /*This Below Code Made by me Ansh*/

    // int i = 1;
    // while (i <= n)
    // {
    //     int value = i;
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = 'A' + value - 1;
    //         cout << ch << " ";
    //         j++;
    //         value++;
    //     }
    //     cout << endl;
    //     i++;
    // }
}