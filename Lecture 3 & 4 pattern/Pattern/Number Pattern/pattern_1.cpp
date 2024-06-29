#include <iostream>
using namespace std;
int main()
{
    /* print pattern like this
    1 1 1
    2 2 2
    3 3 3
    */

    int n;
    cout << "Enter a Number : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}