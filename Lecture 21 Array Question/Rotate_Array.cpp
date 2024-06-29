// https://leetcode.com/problems/rotate-array/

#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> arr){
    for(int i:arr){
        cout <<  i << " ";
    }
}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);


    int k;
    cout << " at How many step you want to rotate array :  ";
    cin >> k;

    int size = nums.size();

    vector<int> temp(size);

    for(int i=0 ; i<size ; i++){
        temp [ (i+k) % size ] = nums[i];
    }

    print(temp);

}



// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int size = nums.size();

//         vector<int> temp(size);

//         for(int i = 0 ; i<size ; i++){
//             temp [ (i+k) % size ]  = nums[i];
//         }

//         // copy temp into nums 
//         nums = temp;
        
//     }
// };