class Solution {
public:
    int solve(vector<vector<int>>&grid , int row, int col, vector<vector<int>>&dp){
        int m = grid.size();
        int n = grid[0].size();
      //base case
        if(row == m-1 && col == n-1 && grid[row][col] == 0) return 1;
        
        if(row >= m || col >= n  || grid[row][col]==1) return 0;
   
        if(dp[row][col] != -1) return dp[row][col];
        
        int down = solve(grid, row+1, col,dp);
        int right = solve(grid, row , col+1,dp);
        
        return dp[row][col] = (down + right);
        
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>>dp(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), -1));
        return solve(obstacleGrid, 0,0,dp);
    }
};

