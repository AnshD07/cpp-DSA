#include <iostream>
using namespace std;
int main()
{
    /*
    
       *
      * *
     * * *

    */
    int n;
    cout << "Enter Number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " "
                 << " ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << "*"
                 << " ";
        }
        int l = i - 1;
        while (l)
        {
            cout << "*"
                 << " ";
            l--;
        }

        cout << endl;
    }
}