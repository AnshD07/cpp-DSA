// https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1




class Solution{   
private:
    bool ispossible(vector<vector<int>> &matrix, int R, int C,int mid){
        int count = 0;
        int n = (R*C);
        
        int row = 0;
        int col = 0;
        while(1){
            
            if( matrix[row][col] < mid){
                count++;
                if(col<C-1){
                    col++;
                }else{
                    col = 0;
                    row++;
                    if(row == R){
                        break;
                    }
                    // continue;
                }
            }
            else{
                if(row<R-1){
                    row++;
                    col = 0;
                }
                else{
                    break;
                }
            }
            
        }
        
        if(count <= n/2){
            return 1;
        }
        return 0;
    }
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here 
        int s= 0;
        int e = 2000;
        int mid = s+(e-s)/2,ans=-1;
        
        while(s <= e){
            
            if(ispossible(matrix,R,C,mid)){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            
            mid = s+(e-s)/2;
        }
        
        return ans;
    }
};









class Solution{ 
private:
    bool ispossible(vector<vector<int>> &matrix,int R, int C , int mid){
        int n = R*C;
        int count = 0;
        
        for(int i=0 ; i<R ; i++){
            for(int j=0 ; j<C ; j++){
                if(matrix[i][j] < mid){
                    count ++;
                }
                else{
                    break;
                }
            }
        }
        
        if(count <= n/2){
            return 1;
        }
        return 0;
    }
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        int s = 0;
        int e = 2000;
        int mid = s +(e-s)/2;
        int n = R*C;
        int ans = -1;
        while(s<=e){
            if( ispossible(matrix,R,C,mid) ){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            
            mid = s+(e-s)/2;
        }
        
        return ans;
    }
};