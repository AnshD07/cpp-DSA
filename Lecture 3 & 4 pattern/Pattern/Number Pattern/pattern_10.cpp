#include <iostream>
using namespace std;
int main()
{
    /*

    A A A
    B B B
    C C C

    */
    int n;
    cout << "Enter NUmber : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}