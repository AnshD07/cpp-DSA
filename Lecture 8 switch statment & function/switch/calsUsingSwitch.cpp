#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ope;
    cout << "Enter first Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;
    cout << "Enter Opration : ";
    cin >> ope;

    switch (ope)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default:
        cout << "Please Enter the Valid Sign For Operation :(";
    }
}