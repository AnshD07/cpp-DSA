#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // chalaki se kam kro
    // for applying binary search array should be always sorted
    
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to Right wala part array to sorted chhe ne
        if (arr[mid] < key)
        {
            start = mid + 1;
        }

        // go to Left Wala Part
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {3, 7, 11, 13, 19, 27};
    int odd[5] = {3, 5, 9, 13, 27};

    int Evenindex = binarySearch(even, 6, 13);
    cout << "In Even Array index of 13 is  =>    " << Evenindex << endl;
    
    int Oddindex = binarySearch(odd, 5, 27);
    cout << "In Odd Array index of 27 is  =>   " << Oddindex << endl;
}