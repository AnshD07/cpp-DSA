// https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    ans.push_back(nums[i]);
                    break;
                }
            }
        }
        return ans;
    }
};


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        for(int n : nums){
            n  = abs(n);
            if(nums[n-1] > 0){
                nums[n-1] *= -1;
            }
            else{
                ans.push_back(n);
            }   
        }
        return ans;
    }
};

