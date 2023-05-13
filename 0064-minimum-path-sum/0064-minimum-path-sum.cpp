class Solution {
public:
    int solve(int x , int y , vector<vector<int>>&grid , vector<vector<int>>&dp){
        //corner case
        if(x <0 || y<0) return 1e9;
        if(x == 0 && y == 0) return grid[x][y];
        
        if(dp[x][y] != -1) return dp[x][y];
        int up = grid[x][y] + solve(x-1,y,grid,dp);
        int left = grid[x][y] + solve(x , y-1, grid, dp);
        
        return dp[x][y] = min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n , vector<int>(m,-1));
        return solve(n-1,m-1,grid,dp);
    }
};