//https://www.codingninjas.com/studio/problems/allocate-books_1090540

// You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum

#include <iostream>
using namespace std;

bool isPossibleSolution(int arr[], int n, int m, int mid)
{
    if(n<m){
        return false;
    }
    
    int studentCount = 1; // minimum one student is there 
    int pagesum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid){
            pagesum = pagesum + arr[i];
        }
        else
        {
            studentCount++; 
            if( studentCount > m  || arr[i] > mid){
                return false;
            }
            pagesum = arr[i];
        }
    }

    return true;
}

int main()
{
    // int arr[4] = {12,34,67,90};
    int arr[4] = {10,20,30,40};
    int n = sizeof(arr) / sizeof(int);
    int m = 2; // Number of students

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    int s = 0;
    int e = sum;

    int mid = s + (e - s) / 2;

    int ans = -1;

    while (s <= e)
    {
        if (isPossibleSolution(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else // No solution exiest
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    cout << ans;
    // return ans;
}


// bool isPossible(vector<int>& arr, int n, int m,int mid){
//     if(n < m){
//         return false;
//     }
    
//     int pageSum = 0;
//     int studentCount = 1;
    
//     for(int i=0 ; i<n ; i++){
//         if(pageSum + arr[i] <= mid){
//             pageSum += arr[i];
//         }
//         else{
//             studentCount ++;
//             if(studentCount  > m || arr[i] > mid){
//                 return false;
//             }   
//             pageSum = arr[i];
//         }
//     }

//     return true;
// }

// int findPages(vector<int>& arr, int n, int m) {
    
//     int s = 0 ;
//     int sum=0 ;
//     for (int i=0 ; i<n ; i++){
//         sum += arr[i];
//     }

//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
//     while(s <= e){
//         if(isPossible(arr,n,m,mid)){
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }

//     return ans;
    
// }