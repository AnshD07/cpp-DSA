#include <iostream>
using namespace std;
int main()
{
    /*
           1
        2  3
      4 5  6
    7 8 9 10

    */

    int n;
    cout << "Enter Number : ";
    cin >> n;

    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space != 0)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}