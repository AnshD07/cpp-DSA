#include<iostream>
using namespace std;
void insertion(int *arr,int i,int size){
    // Base Case
    if(size == 0 || size == 1) return ;

    // solve one Problem other will automatically solved

    int temp = arr[i];
    int j = i -1;
    while(j>=0){
        if(arr[j] > temp){ // shift to right side
            arr[j+1] = arr[j];
        }
        else break;
        j--;
    }
    // value ne insert to karvi ne bhai
    arr[j+1] = temp;

    return insertion(arr,i+1,size-1);
}

int main(){
 int arr[6] = {4,2,5,3,1,8};
 
 insertion(arr,0,6);
 
 for(int i=0 ; i<6 ; i++){
    cout << arr[i] << " ";
 }
}