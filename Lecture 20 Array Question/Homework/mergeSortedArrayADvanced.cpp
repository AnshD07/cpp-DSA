// https://leetcode.com/problems/merge-sorted-array/
 class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        for(int i=0 ; i<m ; i++){
            temp.push_back(nums1[i]);
        }
        nums1.clear();
        int i=0,j=0;
        int k=0;
        while(i<m && j<n){
            if(temp[i] < nums2[j]){
                nums1.push_back(temp[i++]);
            }
            else{   // nums2 is bigger than nums 1
                nums1.push_back(nums2[j++]);
            }
        }

        // copying first array remaining element 
        while(i<m){
            nums1.push_back(temp[i++]);
        }

        // copying Second array remaining element 
        while(j<n){
            nums1.push_back(nums2[j++]);
        }
    }
};