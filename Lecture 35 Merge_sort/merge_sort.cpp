//https://www.naukri.com/code360/problems/merge-sort_920442?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_14



#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = s+(e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];


    // copy values
    int mainArrayIndex = s;
    for(int i=0 ; i<len1 ; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i=0 ; i<len2 ; i++){
        second[i] = arr[mainArrayIndex++];
    }

    
    // merge 2 sorted array logic
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            cout << " aee" << endl;
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // going for remaning element of first array
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
         cout << " aee" << endl;
    }

    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr,int s,int e){
    // Base Case
    if(s>=e) return ; // one element is already sorted chhe bhai

    int mid = s+(e-s)/2;

    // divide karva mate 
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    // conqure both part
    merge(arr,s,e);
}


int main(){
    // int arr[17] = {43,5,3,5,7,8,89,34,56,23,43,62,73,43,22,23,47};
    int arr[5] = {2,4,1,3,5};
    int n=sizeof(arr)/sizeof(int);

    mergeSort(arr,0,n-1);

    // now array is sorted
    for(int i=0 ; i<n ; i++)
        cout << arr[i] << " ";
}   