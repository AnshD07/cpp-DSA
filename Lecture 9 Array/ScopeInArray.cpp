#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << endl
         << "Inside the update function " << endl;

    // updating array's first element
    arr[0] = 420;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "Going Back to Main Function " << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(int);

    update(arr, n);

    // printing the array
    cout << endl
         << "Printing the Main Function " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}