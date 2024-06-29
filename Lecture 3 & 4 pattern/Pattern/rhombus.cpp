#include <iostream>
using namespace std;
int main()
{
    int n =5;
    // cout << "Enter Number : ";
    // cin >> n;


    int i = 1;
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        int j=1;
        while (j<=n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
