#include <iostream>
using namespace std;
int main()
{
    /*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4

    */

    int n;
    cout << "Enter Number : ";
    cin >> n;
    int i = 1;
    int j = 1;
    while (j <= n)
    {
        i = 1;
        while (i <= n)
        {
            cout << i << " ";
            i++;
        }
        cout << endl;
        j++;
    }
}