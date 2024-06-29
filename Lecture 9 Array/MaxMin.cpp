#include <iostream>
using namespace std;

int getMin(int num[], int n)
{
    int mini = INT32_MAX; // Only One Time Use
    for (int i = 0; i < n; i++)
    { 
        mini = min(mini, num[i]);

        // if (num[i] < mini)
        // {
        //     mini = num[i]; /*mini varible overlap thay chhe*/
        // }
    }
    // retruning mini value
    return mini;
}

int getMax(int num[], int n)
{
    int maxi = INT32_MIN; // Only one Time Use
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);

        // if (num[i] > maxi)
        // {
        //     maxi = num[i]; /*maxi varible overlapp thay chhe*/
        // }
    }
    // retruning maxi value
    return maxi;
}

int main()
{
    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int num[100]; // making big array is good practice

    // taking input in all index of array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value of array is   " << getMax(num, size) << endl;
    cout << "Minimum value of array is  " << getMin(num, size) << endl;
}