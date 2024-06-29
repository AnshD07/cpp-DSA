#include <iostream>
using namespace std;
void print(int *arr, int size, int start = 0)
{ // here we pass default arguments
    for (int i = start; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 4, 6, 8, 9};
    // we can make optional to pass or not if pass then take argument if not pass then take default arguments
    print(arr, 5);
}