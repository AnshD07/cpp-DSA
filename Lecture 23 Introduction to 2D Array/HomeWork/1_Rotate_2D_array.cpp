// https://leetcode.com/problems/rotate-image/description/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // cout<<matrix[0][0];
    // vector<vector<int>> ans;
    int ans[3][3] ;
    int col = 2;
    for(int i=0 ; i<3 ; i++){

        // int j = 0;
        int row = 0;
        while(row < 3){
            ans[row][col] = matrix[i][row];
            row++;
            // j++;
        }
        col--;
    }


     for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3;j++){
            cout << ans[i][j] << " " ;
        }
        cout << endl;
    }
}


// Best Solution

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        for(int i=0;i<row; i++){
            for(int j=0; j<=i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};



// with use of extra space
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int ans[n][n];
        int col = n-1;
        for(int i=0 ; i<n ; i++){
            int row = 0;
            while(row < n){
                ans[row][col] = matrix[i][row];
                row++;
            }
            col--;
        }

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ;j++){
                matrix[i][j] = ans[i][j];
            }
        }
    }
};


// without use of extra space
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();


        // first find transpose of matrix threw below few line of code
        int top = 0,left =0;
        int bottom = n-1,right = n-1;
        for(int i=0 ; i<n/2 ; i++){
            for(int j=left ; j<=right ; j++){
                swap(matrix[top][j],matrix[j][top]);
            }
            top++;left++;

            for(int j=top ; j<=bottom ; j++){
                swap(matrix[j][bottom],matrix[bottom][j]);
            }
            right--;bottom--;
        }



        // swap left and right col for getting desire output
        left = 0;
        right = n-1;

        while(left<right){
            for(int i=0 ; i<n ; i++){
                swap(matrix[i][left],matrix[i][right]);
            }
            left++;
            right--;
        }
    }
};



