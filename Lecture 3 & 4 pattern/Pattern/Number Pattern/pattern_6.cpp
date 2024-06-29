#include <iostream>
using namespace std;
int main()
{
    /*

    1
    2 2
    3 3 3

    */
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}