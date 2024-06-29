#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a  number : ";
    cin >> n;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        // ans = (digit * pow(10, i)) + ans;
        /* same flow*/


        ans = (ans * 10) + digit ;
        /* reverse flow*/
        i++;
        n = n / 10;
    }
    cout << ans << endl;
}