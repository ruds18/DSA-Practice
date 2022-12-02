//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  private:
    void bfs(int nodeRow, int nodeCol,vector<vector<int>> &visited,vector<vector<char>>& grid){
        visited[nodeRow][nodeCol] = 1;
        queue<pair<int,int>>q;
        q.push({nodeRow,nodeCol});
        
        // bfs 
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            // Adjacency elements check
            for(int deltaRow = -1 ; deltaRow<=1; deltaRow++){
                for(int deltaCol = -1; deltaCol <=1 ; deltaCol++){
                     int nRow = row + deltaRow;
                    int nCol = col + deltaCol;
                    if(nRow >=0 && nRow < grid.size() && nCol < grid[0].size() && nCol>=0 && grid[nRow][nCol] == '1' && !visited[nRow][nCol]){
                        q.push(make_pair(nRow,nCol));
                        visited[nRow][nCol] = 1;
                    }
                   
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n= grid.size();
        int m = grid[0].size();
        
        vector<vector<int>>visited(n, vector<int>(m,0));
        int cnt =0;
        for(int row =0 ;row<n;row++){
            for(int col = 0; col<m ;col++){
                if(visited[row][col] != 1 && grid[row][col] == '1'){
                    cnt++;
                    bfs(row, col, visited, grid);
                }
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends