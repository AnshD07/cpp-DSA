#include<iostream>
using namespace std;
// https://www.naukri.com/code360/problems/quick-sort_983625?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_15&leftPanelTabValue=SUBMISSION

int partition(int *arr,int s,int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i=s+1 ; i<=e ; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[s],arr[pivotIndex]);

    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){

        while(arr[i] < pivot){
            i++; 
        }

        while(arr[j] > pivot){ // right part ma pivot thi moto chhe to kai nhi karvanu nee
            j++;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;j--;
        }
    }

    return pivotIndex;
}
void quickSort(int *arr,int s,int e){
    if(s>=e) return;

    // get index threw partition
    int p = partition(arr,s,e);


    int mid = s+(e-s)/2; 
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

    // this is quick sort algorithm what was your motive for doing this 
}


int main(){
    int arr[5] = {5,6,3,7,2};
    int n = 5;

    quickSort(arr,0,n-1);

    for(int i=0;i<n ; i++){
        cout << arr[i] << " ";
    }
}


/*   coding ninjas code*/
#include <bits/stdc++.h> 
int partition( vector<int> &arr, int s, int e) {

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }
    return pivotIndex;

}

void solve(vector<int> &arr, int s, int e) {
    //base case
    if(s >= e) 
        return ;

    //partitioon karenfe
    int p = partition(arr, s, e);

    //left part sort karo
    solve(arr, s, p-1);

    //right wala part sort karo
    solve(arr, p+1, e);

}


vector<int> quickSort(vector<int> arr)
{
    solve(arr,0,arr.size()-1);

    return arr;
}
