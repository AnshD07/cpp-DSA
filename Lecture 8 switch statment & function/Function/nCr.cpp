#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r)
{
    // formula nCr = n!/r!*(n-r)!

    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);

    // return num / denom;
    return ((factorial(n)) / (factorial(r) * factorial(n - r)));
}

int main()
{
    int n, r;

    cout << "Enter the Valur of n and r : ";
    cin >> n >> r;

    cout << "Anser is " << nCr(n, r);
}