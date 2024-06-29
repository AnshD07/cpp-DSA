// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

#include <iostream>
#include <bits/stdc++.h>

int peakIndexInMountainArray(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;  // end can be also peak index of mountain
        }
        mid = s + (e - s) / 2;
    }
    return e;
}

using namespace std;
int main()
{
    int arr[5] = {3, 4, 5,10, 1};
    int n = sizeof(arr) / sizeof(int);

    cout << "Peak index in mountain array is :  " << peakIndexInMountainArray(arr,n);
}


// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int s=0,e=arr.size()-1,mid=s+(e-s)/2;
//         int ans=-1;
//         while(s<e){
//             if(arr[mid]<arr[mid+1]){
//                 s = mid +1;
//             }
//             else{
//                 ans = mid;
//                 e = mid;
//             }
//             mid  = s+(e-s)/2;
//         }
//         return ans;
//     }
// };