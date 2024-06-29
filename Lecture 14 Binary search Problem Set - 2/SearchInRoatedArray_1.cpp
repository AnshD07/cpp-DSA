// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2


#include<iostream>
using namespace std;

int Pivot(int arr[],int n){
    int s = 0;
    int e = n -1;
    int mid = s + (e-s)/2;

    while(s < e){
        if( arr[mid] >= arr[0]){
            s = mid + 1;
        }else{
            e = mid;
        }

        mid = s + (e-s)/2;
    }
    // return e;
    return s;
}


int BinarySearch(int arr[],int s,int e,int k){
    // s = 0;
    // e = n - 1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }else if(arr[mid] < k){
            s = mid + 1;
        }else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    int arr[5] = {12, 15, 18, 2, 4};
    int k=18;
    int n = sizeof(arr)/sizeof(int);
  int pivot = Pivot(arr,n);

  if(k >= arr[pivot] && k <= arr[n-1])
  { // BS on Second Line
    cout << "Index is : "<< BinarySearch(arr,pivot,n-1,k);
  }
  else
  { // BS on First line
    cout << "Index is : "<< BinarySearch(arr,0,pivot-1,k);
  }
}