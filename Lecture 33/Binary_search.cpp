#include<iostream>
using namespace std;


void print(int *ar,int s , int e){
    for(int i=s ; i<=e ; i++) cout << ar[i] << " ";
    cout << endl;

    // cout << "Size is : " <<  << endl;
}


int binarysearch(int *arr,int s,int e,int key){
    print(arr,s,e);
    // Base Case
    if(s>e){
        return -1; // key not found 
    }

    // Processing
    int mid = s+(e-s)/2;
    if(arr[mid] == key) return mid;
    else if(arr[mid] > key){
        e = mid - 1;
    }
    else{
        s = mid + 1;
    }

    // Recursive Relation
    return binarysearch(arr,s,e,key);
}
int main(){
    int arr[11] = {1,20,34,54,65,78,90,110,234,235,300};

    cout << "key index is : " << binarysearch(arr,0,11-1,300);
}
