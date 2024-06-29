#include <iostream>
using namespace std;
int main()
{
    int num = 3;
    int ch = '1';
    cout << endl;

    switch (ch)
    {
    case 1:
        cout << "First" << endl;
        break;

    case '1':
        switch (num)
        {
        case 3:
            cout << "Value of Number is : " << num << endl;
            break;
        }
        break;

    default:
        cout << "It is default case" << endl;
    }
}