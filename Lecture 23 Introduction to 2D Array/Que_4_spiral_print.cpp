// https://leetcode.com/problems/spiral-matrix/description/


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(); // row
        int n = matrix[0].size(); // column

        int total = m*n;
        int count = 0;

        int startingrow = 0;
        int startingcol = 0;
        int endingrow = m - 1;
        int endingcol = n - 1;

        vector<int> ans;

        while(count < total){
            
            // printing startingRow
            for( int col = startingcol ;  col<= endingcol &&  count < total; col++){
                ans.push_back(matrix[startingrow][col]);
                count++;
            }
            startingrow++;

            // printing endingCol
            for( int row = startingrow ; row <= endingrow &&  count < total; row++){
                ans.push_back(matrix[row][endingcol]);
                count++;
            }
            endingcol--;

            // printing endingRow
            for( int col = endingcol ; col >= startingcol &&  count < total; col--){
                ans.push_back(matrix[endingrow][col]);
                count++;
            }
            endingrow--;

            // printing startingCol
            for( int row = endingrow ; row >= startingrow &&  count < total; row-- ){
                ans.push_back(matrix[row][startingcol]);
                count++;
            }
            startingcol++;

        }

        return ans;
    }
};











class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int left = 0 , right = n-1;
        int top = 0 , bottom = m - 1;

        int total = m*n;
        int count = 0;

        vector<int> ans;
        while(count < total){
            
            // going Left to Right
            for(int i = left ; i <= right && count < total ; i++){
                ans.push_back(matrix[top][i]);
                count++;
            }
            top++;

            // going Top to Bottom
            for(int i = top ; i <= bottom && count < total ; i++){
                ans.push_back(matrix[i][right]);
                count++;
            }
            right--;

            // going Right to Left
            for(int i = right ; i >= left && count < total; i--){
                ans.push_back(matrix[bottom][i]);
                count++;
            }
            bottom--;

            // going Bottom to Top
            for(int i = bottom ; i >= top && count < total; i--){
                ans.push_back(matrix[i][left]);
                count++;
            }
            left++;


            // and shrinking the area of like left right top bottom
        }

        return ans;
    }
};