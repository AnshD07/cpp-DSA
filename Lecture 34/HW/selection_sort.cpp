#include<iostream>
using namespace std;
void selection_sort(int *arr,int size){
    // Base case
    if(size==0 || size==1){
        return ;
    }

    // minimum value find karvano one case solv thy gyo baki nu recursion kri nakhshe bro
    int min_index = 0;
    for(int i=1 ; i<size ; i++){
        if(arr[i] <= arr[min_index]){
            min_index = i;
        }
    }

    // Processing
    swap(arr[0],arr[min_index]);

    // recursive relation
    return selection_sort(arr+1,size-1);
}

int main(){
 int arr[6] = {4,2,5,3,1,8};
 
 selection_sort(arr,6);
 
 for(int i=0 ; i<6 ; i++){
    cout << arr[i] << " ";
 }
}