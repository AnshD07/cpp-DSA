#include<iostream>
using namespace std;
#include<vector>

vector<int> sieve(int n){
    vector<bool> isprime(n+1,true);
    isprime[0] = isprime[1] = false;
    for(int i=2 ; i<=n ; i++){
        if(isprime[i]){
            for(int j=i*i ; j<=n ; j += i){
                isprime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isprime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}
int main(){
    vector<int> ans = sieve(10);

    for(int i:ans) 
        cout<<i<<" ";
}