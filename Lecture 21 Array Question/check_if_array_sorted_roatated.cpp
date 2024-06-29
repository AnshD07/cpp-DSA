// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

class Solution {
public:
    bool check(vector<int>& nums) {
        int PairCount = 0;
        int n= nums.size();

        for(int i=0 ; i<n-1 ; i++){
            if(nums[i] > nums[i+1]){
                PairCount++;
            }
        }

        if(nums[n-1] > nums[0]){
            PairCount++;
        }


        return PairCount == 1 || PairCount == 0;
        // return PairCount <= 1 ;
    }
};