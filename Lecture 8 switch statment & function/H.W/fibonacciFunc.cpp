#include <iostream>
using namespace std;

int fibNumber(int n)
{
    int temp = n - 2;
    int a = 0, b = 1;
    int sum = 0;

    if (n == 1)
        return 0;

    if (n == 2)
        return 1;

    while (temp != 0)
    {
        sum = a + b;
        a = b;
        b = sum;
        temp--;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    cout << n << "th Fib number is  " << fibNumber(n);
}