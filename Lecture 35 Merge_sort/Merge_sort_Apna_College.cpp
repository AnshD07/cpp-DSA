#include<iostream>
using namespace std;

void conquer(int *arr,int s,int e,int mid){
    int *merged = new int[e-s+1]; // size of array bro if middle index come then it good

    int idx1 = s;
    int idx2 = mid + 1;
    int main_idx = 0;

    // merge 2 sorted array approach
    // O(n)
    while(idx1 <= mid && idx2 <= e){
        if(arr[idx1] < arr[idx2]){
            merged[main_idx++] = arr[idx1++];
        }else{
            merged[main_idx++] = arr[idx2++];
        }
    }
    while(idx1 <= mid){
        merged[main_idx++] = arr[idx1++];
    }
    while(idx2 <= e){
        merged[main_idx++] = arr[idx2++];
    }

    // copy sorted array in main array
    int len_of_full_array = e-s+1;
    for(int i=0 ; i<len_of_full_array ; i++){
        arr[s] = merged[i];
        s++;
    }

    delete []merged;
}

void divide(int *arr,int s,int e){
    int mid = s+(e-s)/2;

    if(s >= e) return ;

    // O(logn)
    divide(arr,s,mid);
    divide(arr,mid+1,e);

    conquer(arr,s,e,mid);
}


int main(){
    int arr[6] = {6,3,9,5,2,8};
    
    divide(arr,0,5);

    for(int i=0 ; i<6 ; i++){
        cout << arr[i] << " ";
    }
}