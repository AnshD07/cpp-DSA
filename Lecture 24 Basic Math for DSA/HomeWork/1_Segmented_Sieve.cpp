// https://www.geeksforgeeks.org/problems/find-prime-numbers-in-a-range4718/1

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<bool> seive(int n)
{
    vector<bool> isprime(n + 1, true);
    isprime[0] = isprime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {

            for (int j = i * i; j < n; j += i)
            {
                isprime[j] = false;
            }
        }
    }

    return isprime;
}

vector<bool> getPrimesInRange(long long L, long long R)
{
    vector<bool> prime = seive(sqrt(R));
    vector<bool> isPrime(R - L + 1, true);

    for (long long i = 2; i * i <= R; i++)
    {
        if (! prime[i])  // not a prime number
            continue;

        for (long long j = max(i * i, ((L + i - 1) / i) * i); j <= R; j = j + i)
        { // this code is similar like normal sieve
            isPrime[j - L] = false;
        }
    }

    if (L == 1)
        isPrime[0] = false;

    return isPrime;
}

int main()
{
    int L = 2;
    int R = 5;
    vector<bool> ans = getPrimesInRange(L, R);

    for(int i=0  ; i<ans.size() ; i++){
        if(ans[i] == true){
            cout << L + i << " " ;
        }
    }
}