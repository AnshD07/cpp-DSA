#include <iostream>
using namespace std;

 

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
            
            // int ans = 0;
            // ans = arr[i];
            // arr[i] = arr[i + 1];
            // arr[i + 1] = ans;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int even[8] = {23, 4, 23, 6, 2, 5, 2, 9};
    int odd[5] = {11, 33, 54, 3, 5};

    cout << endl
         << "For Even Array" << endl;

    swapAlternate(even, 8);
    printArray(even, 8);

    // swapAlternate(odd, 5);
    // printArray(odd, 5);

    return 0;
}