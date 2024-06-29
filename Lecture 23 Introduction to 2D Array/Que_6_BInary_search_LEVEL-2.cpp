// https://leetcode.com/problems/search-a-2d-matrix-ii/description/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col - 1;

        while(rowIndex < row && colIndex >= 0){
            int element = matrix[rowIndex][colIndex];

            if (element == target){
                return 1;
            }
            else if(element < target)
            {
                rowIndex++;
            }
            else{ // element > target
                colIndex--;
            }

        }
        return 0;
    }
};






// different algorithm

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = row-1;
        int colIndex = 0;

        while(rowIndex >= 0 && colIndex < col){
            if(matrix[rowIndex][colIndex] == target){
                return true;
            }
            else if(matrix[rowIndex][colIndex] > target){
                rowIndex--;
            }
            else
                colIndex++;
        }

        return false;
    }
};