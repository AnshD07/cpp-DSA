// https://leetcode.com/problems/power-of-two/description/


/*

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false


*/

#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return !(n&(n-1)); 


        
    //    for(int i = 0 ; i<=30 ; i++){
    //        int ans = pow(2,i);

    //        if(ans==n){
    //            return true;
    //        }
    //    }
    //    return false;
    }

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;

    cout << isPowerOfTwo(n);
}