// https://leetcode.com/problems/complement-of-base-10-integer/submissions/1138205118/

#include<iostream>
using namespace std;

int bitwiseComplement(int n) {
    int m = n;
    int mask = 0;

    if( n == 0){
        return 1;
    }

    while( m != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = ~n & mask;

    return ans;
}

int main(){
    int n;
    cin >> n;

    cout << bitwiseComplement(n);
}

/*
Input: n = 10
Output: 5
Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.
*/