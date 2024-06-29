#include<iostream>
using namespace std;

// Ansh dholakiya Logic
bool issorted(int *arr,int *size){ // here size is last value address store
    cout << arr << endl;
    // cout << *size << endl; 
    if(size == arr) // last element lgi gyo ane kyay pan false no avu aetle array sorted chhe bhai
        return true;
        

    if(*(arr) > *(arr+1))  // cond check if then return false
        return false;
    else{
        return issorted(arr+1,size);
    }
}


// babbar
bool isSorted(int *arr,int size){
    if (size==0 || size==1) return true;

    if(arr[0] > arr[1]) return false;
    else{
        bool remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};

    // int *size = (arr+4); 
    // cout << issorted(arr,size) << endl; 
    
    // cout << "Address of First Index in arr : " <<  arr << endl;

    bool ans = isSorted(arr,5);

    if(ans) cout <<"Array is Sorted";
    else cout << "Array is Not sorted";
}