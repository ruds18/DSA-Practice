class Solution {
public:
    void bfs(vector<vector<int>>&grid , vector<vector<bool>>&visited , int row , int col,int &localmaxi  ){
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        q.push({row , col});
        visited[row][col] = true;
        localmaxi = grid[row][col];
        int deltaRow[] = {0,+1,0,-1};
        int deltaCol[] = {1,0,-1,0};
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i=0; i<4;i++){
                int nextRow  = r + deltaRow[i];
                int nextCol = c + deltaCol[i];
                
                if(nextRow>=0 && nextCol>=0 && nextRow<n && nextCol<m && grid[nextRow][nextCol]>0 && !visited[nextRow][nextCol]){
                    localmaxi += grid[nextRow][nextCol];
                    q.push({nextRow , nextCol});
                    visited[nextRow][nextCol] = true;
                }
            }
        }
        
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxi  = 0;
        
        //bfs
        vector<vector<bool>>visited(n, vector<bool>(m,false));
        for(int row = 0; row<n;row++){
            for(int col = 0; col<m;col++){
                if(!visited[row][col] && grid[row][col] >0){
                    int localmaxi=0;
                    cout<<grid[row][col]<<" ";
                    bfs(grid , visited , row,col,localmaxi);
                    maxi = max(localmaxi,maxi);
                }
            }
        }
        return maxi;
    }
};