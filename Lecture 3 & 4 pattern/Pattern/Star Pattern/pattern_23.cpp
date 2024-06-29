#include <iostream>
using namespace std;
int main()
{
    /*

           1 2 3 4
             2 3 4
               3 4
                 4

    */
    // Here i for Row & j for colums
    // space -> i -1 , number -> n-i+1
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = i - 1;
        while (space != 0)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout <<  i + j -1 ;
            j++;
        }
        cout << endl;
        i++;
    }
}