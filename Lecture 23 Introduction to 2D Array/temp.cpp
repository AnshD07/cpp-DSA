#include <iostream>
using namespace std;


int main()
{
    int n = 4;
    int matrix[4][4] = {5,1,9,11,2,4,8,10,13,3,6,7,15,14,12,16};
    // int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
    int top = 0, left = 0;
    int bottom = n - 1, right = n - 1;
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = left; j <= right; j++)
        {
            swap(matrix[top][j], matrix[j][top]);
        }
        top++,left++;

        for (int j = top; j <= bottom; j++)
        {
            swap(matrix[j][bottom], matrix[bottom][j]);
        }
        right--,bottom--;
    }

    left = 0;
    right = n-1;

    while(left<=right){
        for(int i=0 ; i<n ; i++){
            swap(matrix[i][left],matrix[i][right]);
        }
        left++;
        right--;
    }










    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }



}