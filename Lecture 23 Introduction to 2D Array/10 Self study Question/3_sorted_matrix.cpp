// https://www.geeksforgeeks.org/problems/sorted-matrix2333/1

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        
        // converting 2D array in 1D
        vector<int> linearArr;
        for( int i=0 ; i<N ; i++){
            for( int j=0 ; j<N ; j++){
                linearArr.push_back(Mat[i][j]);
            }
        }
        
        sort(linearArr.begin(),linearArr.end());
        
        int index=0;
        
        // converting 1D array in 2D
        for(int i=0 ; i<N ; i++){
            for(int j=0 ; j<N ; j++){
                Mat[i][j] = linearArr[index++];
            }
        }
        
        return Mat;
        
    }
};