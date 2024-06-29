// https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1


class Solution{
    private:
    
    bool issafe(int x, int y, int n, vector<vector<int>>visited , vector<vector<int>> &m){
        if( (x>=0 && x<n) && (y>=0 && y<n)  &&  (m[x][y] == 1)  &&  (visited[x][y] == 0)) {
            return true;
        }
        return false;
    }
    
    void solve(vector<vector<int>> &m,int n,vector<string> &ans,int x,int y,vector<vector<int>> visited,string path){
        // you have reached x,y here
        
        
        // Base Case
        if( x == n-1 && y == n-1){
            ans.push_back(path);
            return ;
        }
        
        
        // visited mark krvi chhiye ne bhai
        visited[x][y] = 1; 
        
        
        // 4 choice D , L , R , U
        
        // down
        int newx = x+1;
        int newy = y;
        if( issafe(newx,newy,n,visited,m) ){
            path.push_back('D');
            solve(m,n,ans,newx,newy,visited,path); // baki nu recursion kri leshe
            path.pop_back();
        }
        
        
        // left
        newx = x;
        newy = y-1;
        if( issafe(newx,newy,n,visited,m) ){
            path.push_back('L');
            solve(m,n,ans,newx,newy,visited,path); // baki nu recursion kri leshe
            path.pop_back();
        }
        
        // right
        newx = x;
        newy = y + 1;
        if( issafe(newx,newy,n,visited,m) ){
            path.push_back('R');
            solve(m,n,ans,newx,newy,visited,path); // baki nu recursion kri leshe
            path.pop_back();
        }
        
        // up
        newx = x - 1;
        newy = y;
        if( issafe(newx,newy,n,visited,m) ){
            path.push_back('U');
            solve(m,n,ans,newx,newy,visited,path); // baki nu recursion kri leshe
            path.pop_back();
        }
        
        visited[x][y] = 0; // backtracking
    }
    
    
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        int srcx = 0;
        int srcy = 0;
        
        if(m[0][0] == 0) return ans; // some critical edge case
        
        vector<vector<int>> visited = m;
        for(int i=0 ; i<n ;i++){
            for(int j=0 ; j<n ; j++){
                visited[i][j] = 0; // marking vector with zeros 
            }
        }
        
        string path = "";j
        
        solve(m,n,ans,srcx,srcy,visited,path);
        
        sort(ans.begin(),ans.end());
        return ans;
    }z
}; 