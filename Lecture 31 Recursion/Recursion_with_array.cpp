#include<iostream>
using namespace std;

bool issorted(int *arr , int size, int index = 0 ){ // default argument
    
    // Base case when we need to stop recursion
    if (index == size-1)  return true;
    
    // Smaller problem
    int recursion_result = issorted(arr,size,index+1);
    
    // First calling function then Do Processing
    // Recursive Relation
    int ans = recursion_result & arr[index] <= arr[index + 1];
    return ans;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    // check if array is sorted or not
    
    cout << issorted(arr,size) << endl;

} 
