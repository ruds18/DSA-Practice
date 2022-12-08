//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    private:
    void dfs(int row, int col,vector<vector<bool>> &vis,vector<vector<int>> &grid){
        vis[row][col] =true;
        int n = grid.size();
        int m = grid[0].size();
        int deltaRow[] = {-1, 0, +1, 0};
        int deltaCol[] = {0, +1, 0, -1};
        
        // 4 direction check
        for(int k=0; k<4; k++){
            int nrow = row + deltaRow[k];
            int ncol = col + deltaCol[k];
            
            if(nrow >= 0 && nrow <n && ncol >=0 && ncol <m && !vis[nrow][ncol] && grid[nrow][ncol] == 1){
                dfs(nrow, ncol, vis, grid);
            }
        }
    }
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        int deltaRow[] = {-1, 0, +1, 0};
        int deltaCol[] = {0, +1, 0, -1};
        int cnt =0;
        queue<pair<int, int>>q;
        vector<vector<bool>>vis(n , vector<bool>(m, false));
        
        // Boundary Traversal

        for(int col =0 ;col<m; col++){
            // first row
            if(!vis[0][col] && grid[0][col] == 1){
                vis[0][col] = true;
                q.push({0, col});
            }
            //last row
            if(!vis[n-1][col] && grid[n-1][col] == 1){
                vis[n-1][col] = true;
                q.push({n-1, col});
            }
        }
        
          for(int row =0 ;row<n; row++){
            // first row
            if(!vis[row][0] && grid[row][0] == 1){
                vis[row][0] = true;
                q.push({row, 0});
            }
            //last row
            if(!vis[row][m-1] && grid[row][m-1] == 1){
                vis[row][m-1] = true;
                q.push({row, m-1});
            }
        }
        
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int k=0; k<4; k++){
            int nrow = row + deltaRow[k];
            int ncol = col + deltaCol[k];
            
             if(nrow >= 0 && nrow <n && ncol >=0 && ncol <m && !vis[nrow][ncol] && grid[nrow][ncol] == 1){
                q.push({nrow, ncol});
                vis[nrow][ncol] = true;
            }
            }
        }
        
    
        for(int i=0; i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j] == 1) cnt++;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends