class Solution {
    private:
   void bfs(int nodeRow, int nodeCol,vector<vector<int>> &visited,vector<vector<char>>& grid , int delRow[], int delCol[]){
        visited[nodeRow][nodeCol] = 1;
        queue<pair<int,int>>q;
        q.push({nodeRow,nodeCol});
        
        // bfs 
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            // Adjacency elements check
            for(int k = 0; k < 4; k++){
                     int nRow = row + delRow[k]; 
                    int nCol = col + delCol[k];
                
                    if(nRow >=0 && nRow < grid.size() && nCol < grid[0].size() && nCol>=0 && grid[nRow][nCol] == '1' && !visited[nRow][nCol]){
                        q.push(make_pair(nRow,nCol));
                        visited[nRow][nCol] = 1;
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int deltaRow[] = {-1, 0, +1, 0};
        int deltaCol[] = {0, +1, 0, -1};
        vector<vector<int>>vis(n , vector<int>(m, 0));
        int ans =0;
        
        // bfs
        for(int row = 0 ; row< n; row++){
            for(int col =0; col<m ; col++){
                if(!vis[row][col] && grid[row][col] ==  '1'){
                    ans++;
                    bfs(row, col, vis, grid, deltaRow, deltaCol);
                }
            }
        }
        return ans;
    }
};