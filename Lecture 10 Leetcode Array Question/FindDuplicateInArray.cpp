// https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1



#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findDuplicate(int arr[],int size)
{
    // Write your code here
    int ans = 0;
    for (int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }

    // Xoring from 1 to n-1
    for (int i = 1; i < size; i++){
        ans = ans ^ i;
    }

    return ans;
}
int main(){
    int arr[9] = {8, 7, 2, 5, 4, 7, 1, 3, 6};
    int size = sizeof(arr) / sizeof(int);
    cout << "Duplicate Element In array is : " << findDuplicate(arr,size);
}



// int findDuplicate(vector<int> &arr) 
// {
//     // Write your code here
//     int temp=0;
//     int i=0;
//     while(i<arr.size()){
//         int n = abs(arr[i]);
        
//         int checkIndex = n -1;
//         if(arr[checkIndex] > 0){
//             arr[checkIndex] *= -1;
//         }
//         else{
//             temp = n;
//         }
//         i++;
//     }

//     return temp;
// }
