#include <iostream>
using namespace std;
int main()
{ /*
    0 1 1 2 3 5 8 13 21 34 55.......
*/
    int n;
    cout << "Enter Range : ";
    cin >> n;
    int sum=0;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    while (n-2)
    { 
        sum = a+b;
        a = b;
        b = sum;
        cout << sum << " ";
        n--;
    }
    
}