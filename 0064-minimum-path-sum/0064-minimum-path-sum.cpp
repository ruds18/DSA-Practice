class Solution {
public:
    int solve(vector<vector<int>>&grid, int row , int col, vector<vector<int>>&dp){
        int n = grid.size();
        int m = grid[0].size();
        //base case
        if(row <0 || col<0 || row >= n || col >=m ) return 1e9;
        if(row == n-1 && col == m-1) return grid[row][col];
        
        if(dp[row][col] != -1) return dp[row][col];
        int right =  grid[row][col]  + solve(grid,row,col+1,dp);
        int down =  grid[row][col]+ solve(grid, row+1,col,dp);
        
        return dp[row][col] =  min(right, down);
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        //base case
        vector<vector<int>>dp(grid.size() , vector<int>(grid[0].size() , -1));
        return solve(grid, 0,0,dp);
    }
};