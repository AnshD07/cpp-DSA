#include <iostream>
using namespace std;
int main()
{
    // int num1, num2;
    // cout << "Enter Number 1 And Number 2 : ";
    // cin >> num1 >> num2;

    // int sum = num1 + num2;
    // cout << "Sum of Both Number is  : " << sum << endl;

    int n;
    cout << "Enter a Number : " << endl;
    cin >> n;

    if (n == 0)
    {
        cout << "number is Zero";
    }
    else if (n < 0)
    {
        cout << "Number is Negative";
    }
    else
    {
        cout << "NUmber is Positive";
    }
}