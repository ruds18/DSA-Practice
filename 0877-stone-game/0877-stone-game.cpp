class Solution {
public:
    
    int solve(int left , int right, vector<int>&piles,vector<vector<int>>&dp){
        //base case
        if(left == right) return piles[left];
        
        if(dp[left][right] != -1) return dp[left][right];
        
        int x = piles[left] - solve(left+1, right, piles,dp);
        int y = piles[right] - solve(left, right-1,piles,dp);
        
        return dp[left][right] = max(x,y);
    }
    
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        vector<vector<int>>dp(n, vector<int>(n,-1));
        return solve(0,n-1,piles,dp) >=0 ;
    }
};