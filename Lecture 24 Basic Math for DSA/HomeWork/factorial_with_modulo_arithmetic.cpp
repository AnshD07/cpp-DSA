#include <iostream>
using namespace std;
const int m = 1000000007;
int factorial(int n){
    if (n <= 1){
        return 1 % m;
    }
    
    return ((n % m) * (factorial(n - 1) % m)) % m;
}

int main()
{
    int a = 212;

    cout << factorial(12);
}