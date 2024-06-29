#include <iostream>
using namespace std;
int main()
{
    /*
    1 2 3           for I/P of n = 3
    4 5 6
    7 8 9
    */
    int n;
    cout << "Enter a Number :  ";
    cin >> n;

    int i = 1, count = 1, j = 1;
    while (j <= n)
    {
        i = 1;
        while (i <= n)
        {
            cout << count << " ";
            count++;
            i++;
        }
        cout << endl;
        j++;
    }
}