// https://leetcode.com/problems/subsets/


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // Mapping bits to array index and get the answer

        int n = nums.size();
        int power = pow(2,n);
        vector<vector<int>> ans;

        for(int i=0 ; i<power ; i++){
            vector<int> temp1;
            int temp = i;
            for(int j=0;j<n ;j++){
                if(temp&1){
                    temp1.push_back(nums[j]);
                }
                temp = temp >> 1;
            }
            ans.push_back(temp1);
        }
        

        return ans;
    }
};