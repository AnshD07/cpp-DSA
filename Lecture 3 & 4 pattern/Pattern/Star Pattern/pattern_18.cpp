#include <iostream>
using namespace std;
int main()
{
    /*
            col =   1 2 3 4

          row=1     _ _ _ *       row/p-> n = 4
          row=2     _ _ * *
          row=3     _ * * *
          row=4     * * * *
    */
    int n;
    cout << "Enter Number : ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space!=0)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}