// https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        // visuilize it on 1D matrix
        int s = 0;
        int e = row*col - 1;
        int mid = s + (e-s)/2;

        while(s<=e){
            int element = matrix[mid / col][mid % col]; // maping of 1D array to 2D array

            if(element == target){
                return 1;
            }
            else if(element < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }

            mid = s+(e-s)/2;
        }
        return 0;
    }
};