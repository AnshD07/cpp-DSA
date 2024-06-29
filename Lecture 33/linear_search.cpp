#include<iostream>
using namespace std;


void print(int *ar,int n){
    for(int i=0 ; i<n ; i++) cout << ar[i] << " ";
    cout << endl;

    cout << "Size is : " << n << endl;
}


int linearSearch(int *arr,int size,int key){
    print(arr,size);
    if(size==0){  // size zero mens element no mlo
        return false;
    }

    if(*arr == key) return true;

    return linearSearch(arr+1,size-1,key);
}


int main(){
    int arr[5] = {3,5,1,2,6};
    int key = 50;

    if(linearSearch(arr,5,key))
        cout << "key is founded";
    else 
        cout << "key is Not found";
}