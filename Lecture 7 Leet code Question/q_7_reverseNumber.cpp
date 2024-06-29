// https://leetcode.com/problems/reverse-integer/


#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if ((ans < INT32_MIN / 10) || (ans > INT32_MAX / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        x = x / 10;
    }

    cout << ans;
}


// this code is for leet code solution it only here for refrence

/*

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x != 0){
            int digit = x % 10;
            if((ans < INT_MIN/10) || (ans > INT_MAX/10)){
                return 0;
            }
            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return ans;
    }
};

*/

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        for(int i=0; x != 0;  i++,x /= 10){

            int temp = x % 10;
 
            if( (ans < INT_MIN/10) || (ans > INT_MAX/10) ) return 0;

            ans = (ans * 10) + temp;
        }

        return ans;
    }
};