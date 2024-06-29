// https://leetcode.com/problems/move-zeroes/description/

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int i=0;

//         // What?
//         // Shifting all non Zero ELemen to left side

//         for(int j = 0 ; j < nums.size() ; j++){
//             if(nums[j] != 0){
//                 swap(nums[i] , nums[j]);
//                 i++;
//             }
//         }
//     }
// };





#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n ){
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
};

int main(){

    // Shifting all Non Zer0 Element to Left Side here

    int arr[6] = {1,3,0,0,12,0};

    int i=0;
    for(int j=0 ; j<6 ; j++){
        if(arr[j] != 0){
            swap(arr[i] , arr[j]);
            i++;
        }
    } 

    // int nonZero=0;
    //     for(int j = 0 ; j < arr.size() ; j++){
    //         if(arr[j] != 0){
    //             swap(arr[nonZero] , arr[j]);
    //             nonZero++;
    //         }
    //     }
 
    print(arr,6);
}