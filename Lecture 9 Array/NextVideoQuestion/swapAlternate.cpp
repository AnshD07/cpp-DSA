#include <iostream>
using namespace std;

void swapalternate(int arr[], int n)
{
    int index = 0;
    while (index <= n)
    {
        if (index + 1 < n)
        {
            swap(arr[index], arr[index + 1]);
        }
        index += 2;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int num[5] = {1, 2, 3, 4, 5};

    int numlength = sizeof(num) / sizeof(int);

    swapalternate(num, numlength);

    printArray(num, numlength);
}