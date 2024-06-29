// https://leetcode.com/problems/count-primes/description/

class Solution {
public:
    int countPrimes(int n) {
        // sieve of eratosthenes Algorithm
        int cnt = 0;
        vector<bool> prime(n+1,true);

        prime[0] = prime[n] = false;

        for(int i=2 ; i<n ; i++){

            if(prime[i]){
                cnt++;

                for(int j=2*i ; j<n ; j = j+i){
                    prime[j] = false;
                }
            }
            
        }

        return cnt;
    }
};