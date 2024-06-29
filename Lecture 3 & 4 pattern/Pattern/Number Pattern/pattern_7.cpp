#include <iostream>
using namespace std;
int main()
{
    /*

    1
    2 3
    4 5 6

    */

    int row = 1, n, count = 1;
    cout << "Enter The Number : ";
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}