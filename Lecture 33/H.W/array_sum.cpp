#include<iostream>
using namespace std;
int arrSum(int *arr,int size){
    // Edge case
    if(size == 0) return 0;
     
    // Base case
    if(size==1) {
        return *(arr+0);
    } 
    // size 0 thy jay aetle last index par arr nu pointer hoy to ene return kri nakhvanu bhai biju shu
    
    // pela nu bija sathe sum kri nakhiye ne
    // Recursive Relation
    return *arr + arrSum(arr+1,size-1);

}
int main(){
    int arr[5] = {1,2,3,4,50};

    cout << arrSum(arr,5) << endl;
}