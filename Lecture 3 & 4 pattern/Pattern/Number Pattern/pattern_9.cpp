#include <iostream>
using namespace std;
int main()
{
    /*

    1
    2 1
    3 2 1
    4 3 2 1

    */

    int n;
    cout << "Enter a Number : ";
    cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     int value = row;
    //     while (col <= row)
    //     {
    //         cout << value << " ";
    //         value--;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row - col + 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}
