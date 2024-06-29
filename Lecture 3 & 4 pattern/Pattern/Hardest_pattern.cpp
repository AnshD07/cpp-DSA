#include <iostream>
using namespace std;
int main()
{
    /*
               1
            1  2  1
         1  2  3  2  1
      1  2  3  4  3  2  1

    */

    int n;
    cout << "Enter Number : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // print karo space(1st triangle)
        int space = n - i;
        while (space)  // space var loop iterate thvi joiae
        {
            cout << "_"
                 << " ";
            space--;
        }

        // print karo 2nd trinagle
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }


        // print karo 3rd triangle
        int start = i - 1;
        while (start)    // start times loop iterate thvi joiaee
        {
            cout << start << " ";
            start--;
        }

        cout << endl;
        i++;
    }
}