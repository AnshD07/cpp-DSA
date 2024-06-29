// https://leetcode.com/problems/number-of-1-bits/description/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; 
    /*

    Write a function that takes the binary representation of an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

    Example 1:

        Input: n = 00000000000000000000000000001011
        Output: 3
        Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.

    */

    int count = 0; 
    while (n != 0)
    {
        // Checking Last Bit threw AND operator
        // see in notes for better understanding
        if (n & 1)
        {
            // n&1 if 1 then it true and enter in if()
            count++;
        } 
        // right shift n 1 time
        n = (n >> 1);
    }
    cout << count << endl;
}