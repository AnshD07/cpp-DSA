#include <iostream>
using namespace std;

void ReverseArray(int arr[], int n)
{
    int Start = 0; // index is from 0 to n-1 see notes of DSA
    int End = n - 1;
    while (Start <= End)
    {
        swap(arr[Start], arr[End]);
        Start++;
        End--;
    }
}

void printArray(int arr[], int n)
{
    cout << endl
         << "Printing Reverse Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}

int main()
{
    int arr[4] = {2, 3, 7, 8};
    int arr2[5] = {54, 2, 5, 76, 3}; 

    ReverseArray(arr, 4);
    ReverseArray(arr2, 5);

    // We learn about Array Scope this is it. array can change

    printArray(arr, 4);
    printArray(arr2, 5);
    
}