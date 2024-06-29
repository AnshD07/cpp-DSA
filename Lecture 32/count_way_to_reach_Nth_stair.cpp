//  https://www.naukri.com/code360/problems/count-ways-to-reach-nth-stairs_798650


// without DP does'nt happen this Problem because TLE mar jayega 
// but Recursion approach is right
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int countDistinctWays(int nStairs) {
    if(nStairs < 0) return 0;
    if(nStairs == 0) return 1;
    // if(nStairs <= 2) return nStairs;

    return countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
}   