#include <iostream>
using namespace std;
int main()
{
    /*

    1
    2 3
    3 4 5
    5 6 7 8

    */
    int n;
    cout << "Enter The Number : ";
    cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int value = row;
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << value << " ";
    //         value++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    /*   Homework  without value varible or third varible  */

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << col + row - 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}