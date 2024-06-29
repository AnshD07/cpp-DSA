#include <iostream>
using namespace std;
int main()
{
    /*
        Prime Number check
    */
    int n;
    cout << "Enter Number : ";
    cin >> n;
    bool isPrime = 0;
    for (int i = 2; i < n; i++)
    {
        // rem = 0 ,Not Prime
        if (n % i == 0)
        {
            cout <<n<<  " is Not a Prime number";
            isPrime = 1;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << n << "  is Prime Number ";
    }
}