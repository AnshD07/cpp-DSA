#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;      
    cout << "Enter Number : ";
    cin >> n;

    int i = 0, ans = 0;
    while (n != 0)
    {
        // get last bit
        int bit = n & 1;

        // for genrate reverse number formula
        ans = (bit * pow(10, i)) + ans;

        // Right Shift n -> 1 times
        n = n >> 1;
        i++;
    }
    cout << ans;

    // int n;
    // cout << "Enter Number : ";
    // cin >> n;
    // int ans = 0, i = 0;
    // while (n != 0)
    // {
    //     int digit = n % 2;
    //     ans = (digit * pow(10, i)) + ans;
    //     n = n / 2;
    //     i++;
    // }
    // cout << ans;

}