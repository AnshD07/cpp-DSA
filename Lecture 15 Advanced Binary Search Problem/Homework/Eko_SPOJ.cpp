// https://www.spoj.com/problems/EKO/
 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int *arr ,int n,int m,int mid){
    int sum=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>mid){
            sum += (arr[i] - mid);
        }
    }

    if(sum>=m) return true;
    return false;
}

int32_t main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    
    for(int i=0;i<n;i++) cin>>arr[i];
    int s=0;
    int maxi = -1;
    for(int i=0;i<n;i++) maxi = max(arr[i],maxi);
    int e = maxi;
    int mid=s +(e-s)/2;

    while(s <= e){
        // if true than he want to less wood so he make high his blade
        if(isPossible(arr,n,m,mid)){
            maxi = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1; 
        }
        mid = s+(e-s)/2;
    }
    cout << maxi;

    return 0;
}