#include <iostream>
using namespace std;
int main()
{
    /*

    A
    B C
    C D E
    D E F G

    */

    int n;
    cout << "Enter Number : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}