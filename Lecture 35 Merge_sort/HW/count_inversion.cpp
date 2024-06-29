// https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

//https://www.naukri.com/code360/problems/merge-sort_920442?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_14

// https://www.youtube.com/watch?v=sV4RhDIIKO0


#include<iostream>
using namespace std;



int conquer(int *arr,int s,int e,int mid){
    int inv = 0;
    int n1 = mid - s + 1;
    int n2 = e - mid;

    int *a = new int[n1];
    int *b = new int[n2];

    for(int i=0 ; i<n1 ; i++){
        a[i] = arr[s+i];
    }
    for(int i=0 ; i<n2 ; i++){
        b[i] = arr[mid + i + 1];
    }

    int i1 = 0;
    int i2 = 0;
    int main_ind = s;

    while(i1 <= n1 && i2 <= n2){
        if(arr[i1] <= arr[i2]){
            arr[main_ind++] = a[i1++];
        }
        else{
            arr[main_ind++] = b[i2++];

            inv += (n1 - i1); // see the logic of it in apna college
        }
    }
    while(i1 < n1){
        arr[main_ind++] = a[i1++];
    }
    while(i2 < n2){
        arr[main_ind++] = b[i2++];
    }

    return inv;
}


int mergeSort(int *arr,int s,int e){
    int inv = 0;
    if(s < e){
        int mid = s+(e-s)/2;

        inv += mergeSort(arr,s,mid);
        inv += mergeSort(arr,mid+1,e);

        inv += conquer(arr,s,e,mid);
    }
    else{
        return inv;
    }
}



int main(){
    // int arr[8] = {3,5,6,9,1,2,7,8};
    int arr[5] = {2 ,4 ,1 ,3 ,5};
    int n=sizeof(arr)/sizeof(int);


    cout << mergeSort(arr,0,n-1) << endl;

    // now array is sorted
    for(int i=0 ; i<n ; i++)
        cout << arr[i] << " ";
}