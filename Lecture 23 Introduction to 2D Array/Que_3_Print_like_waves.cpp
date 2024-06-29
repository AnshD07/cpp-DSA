//https://www.codingninjas.com/studio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int col=0 ; col<mCols ; col++){
        if( col & 1 ){
            // odd Index --> Bottom to Top

            int row = nRows-1;
            while(row>=0){
                ans.push_back(arr[row][col]);
                row--;
            }
        }
        else{
            // Even Index or 0th INdex --> Top to Bottom
            int row = 0;
            while(row<nRows){
                ans.push_back(arr[row][col]);
                row++;
            }
        }

    }
    return ans;
    // this is ansh dholakiya from babara
}