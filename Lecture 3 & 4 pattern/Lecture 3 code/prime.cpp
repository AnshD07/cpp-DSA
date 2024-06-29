#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    int i = 2;

    while (i <= n)
    {
        if (n % i == 0)
        {
            break;
        } 
        i++;
    }
    if (i == n)
    {
        cout << "Prime";
    }
    else
        cout << "Not Prime";
}