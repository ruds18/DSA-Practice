class Solution {
public:
    int solve(vector<vector<char>>&matrix , int row  , int col , int &ans , vector<vector<int>>&dp){
        //base case
        if(row >= matrix.size() || col>= matrix[0].size()) return 0;
        
        if(dp[row][col] != -1) return dp[row][col];
        
        int right = solve(matrix  , row, col+1,ans,dp);
        int diagonal = solve(matrix , row+1,col+1,ans,dp);
        int down  = solve(matrix , row+1, col, ans,dp);
        
        if(matrix[row][col] == '1'){
            int output = 1+ min(right, min(diagonal, down));
            ans = max(ans, output*output);
            return dp[row][col] =  output;
        }else{
            return 0;
        }
        
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int ans = 0;
        vector<vector<int>>dp(matrix.size(), vector<int>(matrix[0].size(),-1));
        solve(matrix , 0,0,ans,dp);
        return ans;
    }
};