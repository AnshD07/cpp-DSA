#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int key, arr[10] = {2, 4, -45, 6, 23, 8, 62, 9, 8, 43};

    int arrsize = sizeof(arr) / sizeof(int);

    cout << "Enter the element to search for : " << endl;
    cin >> key;

    if (search(arr, arrsize, key))
    {
        cout << "Enterd Key is Present :)";
    }
    else
        cout << "Enterd Key is Absent :(";
}