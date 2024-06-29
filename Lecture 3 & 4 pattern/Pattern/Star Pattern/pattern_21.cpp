#include <iostream>
using namespace std;
int main()
{
    /*

    1 1 1 1
      2 2 2
        3 3
          4

    */
    // Here i for Row & j for colums
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = i - 1; // check in book
        while (space)
        {
            cout << " ";
            space--;
        }

        int j = 1;
        while (j <= (n - i + 1))
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}