#include<iostream>
using namespace std;

void bubble_sort(int *arr,int size){
    // Base case
    if( size==0 || size==1){
        return ;
    }

    // 1-case solve kr diya largest element ko end me rakh dega
    for(int i=0 ; i < size - 1 ; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    
    bubble_sort(arr,size-1);
    // Its so easy bro
}


int main(){
 int arr[6] = {4,2,5,3,1,8};
 
 bubble_sort(arr,6);
 
 for(int i=0 ; i<6 ; i++){
    cout << arr[i] << " ";
 }
}