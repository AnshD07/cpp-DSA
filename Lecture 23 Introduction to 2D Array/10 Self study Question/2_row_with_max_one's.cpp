// https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1


// Best Time COmplesity

class Solution{
public:
    int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
        int row = 0;              // keeps track of row; starts at first row             
        int col = m-1;            // keeps track of column; starts at last column
        int max_row_index=-1;   // keeps track of result row index
        
        // starting from top right corner
        // go left if you encounter 1
        // do down if you encounter 0
        while(col >= 0 && row<n )
        {
            if(arr[r][col]==1)
            {
                col--;
                max_row_index = r;
            }
            else
                row++;
        }
        return max_row_index;
    }
};


// Brute Force approach
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans = -1;
        int maxi = 0;
	    for (int i =0 ; i<n ; i++){
	        int count = 0;
	        for(int j =0 ; j<m ; j++){
	            if(arr[i][j] == 1){
	                count++;
	            }
	        }
	        if(count>maxi){
	            maxi = count;
	            ans = i;
	        }
	    }
	    
	    return ans;
	}

};







// WIth reverse mind ulti khopdi 

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans = -1;
	    
        int maxi = m;
        int temp = m;
        
	    for (int i =0 ; i<n ; i++){
	        
	        if(arr[i][0]==1){
	            return i;
	        }
	        
	        
	        for(int j =0 ; j<m ; j++){
	            if(arr[i][j] == 1){
	                temp = j;
	                break;
	            }
	        }
	        
	        if(temp < maxi){
	            maxi = temp;
	            ans = i;
	        }
	        
	    }
	    
	    return ans;
	}

};