#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2
int firstoccurence(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int Secondoccurence(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans;
    while (s <= e)
    {
        if (arr[mid] == k)
        { 
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "First Index of Key is   "<< firstoccurence(arr, n, k) << endl;
    cout << "Second Index Of Key is  "<< Secondoccurence(arr, n, k) << endl;
}




/*  Binary search threw Loops  */

// int first(vector<int>& arr, int n, int k){
//     int s=0,e=n-1,mid=s+(e-s)/2;
//     int ans =-1;
//     while(s<=e){
//         if(arr[mid]==k){
//             ans =mid;
//             e = mid -1;
//         }
//         else if(arr[mid]>k){
//             e =mid-1;
//         }else{
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;

// }


// int last(vector<int>& arr, int n, int k){
//     int s=0,e=n-1,mid =s+(e-s)/2;
//     int ans =-1;
//     while(s<=e){
//         if(arr[mid]==k){
//             ans = mid;
//             s = mid + 1;
//         }
//         else if(arr[mid]>k){
//             e = mid - 1;
//         }else{
//             s = mid + 1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;
// }

// #include <bits/stdc++.h> 
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     pair<int,int> p;
//     p.first = first(arr,n,k);
//     p.second = last(arr,n,k);
    
//     return p;
// }






/*  threw RECURSION in c++   */

#include <bits/stdc++.h> 
int binaryleft(vector<int>&arr,int s,int e,int k ,int ans ){
    if(s>e)
        return ans;
    
    int mid = s+(e-s)/2;
    if(arr[mid] == k ){
        // e = mid - 1 thay ne
        return binaryleft(arr, s, mid - 1, k, mid);
    }
    else if(arr[mid] < k){
        // s = mid + 1;
        return binaryleft(arr, mid+1, e, k, ans);
    } else {
        // e = mid + 1;
        return binaryleft(arr, s, mid - 1, k, ans);
    }
}

int binaryright(vector<int>&arr,int s,int e,int k ,int ans ){
    if(s>e) 
        return ans;
    
    int mid = s+(e-s)/2;
    if(arr[mid] == k ){
        // e = mid - 1 thay ne
        return binaryright(arr, mid + 1, e, k, mid);
    }
    else if(arr[mid] < k){
        // s = mid + 1;
        return binaryright(arr, mid+1, e, k, ans);
    } else {
        // e = mid + 1;
        return binaryright(arr, s, mid - 1, k, ans);
    }
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int s=0,e=n-1;
    int mid = s+(e-s)/2;

    pair<int,int> p;
    p.first = binaryleft(arr,s,e,k,-1);
    p.second = binaryright(arr,s,e,k,-1);

    return p;
}