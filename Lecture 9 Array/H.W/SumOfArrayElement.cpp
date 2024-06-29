#include <iostream>
using namespace std;

int sumOfArrayElement(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++){ 
        sum = arr[i] + sum;
    }
    return sum;
}

int main()
{
    int num[100], size;
    cout << "Enter size of array : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout <<"Sum of All Element in array is : " << sumOfArrayElement(num, size);
}