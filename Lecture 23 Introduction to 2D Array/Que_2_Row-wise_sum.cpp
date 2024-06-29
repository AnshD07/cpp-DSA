#include <iostream>
using namespace std;

void takeinput(int col, int arr[][3], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

// print row wise sum
void printRowWiseSum(int arr[][3], int row, int col)
{
    cout << "printing sum row wise  -- > " << endl;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

// print column wise sum
void printColwisesum(int arr[][3], int row, int col)
{
    cout << "printing sum col wise -->  " << endl;

    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}

int largestRowsum(int arr[][3], int row, int col)
{
    int maxi = INT32_MIN;
    int RowIndex = -1;
    
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        if (sum > maxi)
        {
            maxi = sum;
            RowIndex = i;
        }
    }

    cout << "The maximum sum is " << maxi << endl;
    return RowIndex;
}

int main()
{
    int arr[3][3];

    takeinput(3, arr, 3);

    // printRowWiseSum (arr,3,3);
    // printColwisesum (arr,3,3);

    int num = largestRowsum(arr, 3, 3);
    cout << " max row is at index  " << num << endl;
}