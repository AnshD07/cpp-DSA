// https://leetcode.com/problems/fibonacci-number/


class Solution {
private:
    int nth_fib(int n){
        // Base case
        if(n==0) return 0;
        if(n==1) return 1;

        // Recursive R
        return nth_fib(n-1) + nth_fib(n-2);
    }
public:
    int fib(int n) {
        return nth_fib(n);
    }
};