#include <iostream>
using namespace std;
int main()
{
    /*
    use of For loop in print 1 to n number
    */
    int n;
    cout << "Enter Number : ";
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << " ";
    // }
    int i = 1;
    
    for (;;)
    {
        if (i <= n)
        {
            cout << i << " ";
        }else{
            break;
        }
        i++;
    }
}