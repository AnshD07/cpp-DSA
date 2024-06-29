// https://leetcode.com/problems/permutations/


class Solution {
    private:
    void solve(vector<int> & nums,int index,vector<vector<int>> &ans){
        // Base Case
        if(index >= nums.size()){
            ans.push_back(nums);
            return ;
        }

        for(int i=index ; i<nums.size() ; i++){ // aek case solve kar diya baki case recursion kri nakhshe
            swap(nums[index],nums[i]);
            solve(nums,index + 1 , ans);
            swap(nums[index],nums[i]); // backtracking to karvu ne bhai
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;

        solve(nums,index,ans);

        return ans;
    }
};