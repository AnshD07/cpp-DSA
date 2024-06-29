// https://leetcode.com/problems/subsets/description/

// you need to understand recursion for this bro

class Solution {

private:
     void solve(vector<int> nums, vector<int> output,int index ,vector<vector<int>> &ans){
        // Base case

        if(index >= nums.size()){
            ans.push_back(output);

            return; // but anni pela ans ma bdha set ne store to karvane bhai
        }

        // exclude
        solve(nums,output,index+1,ans);

        // include
        int element = nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
     }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        
        solve(nums,output,index,ans);
        return ans;
    }
};