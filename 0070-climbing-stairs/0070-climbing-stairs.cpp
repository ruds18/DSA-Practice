class Solution {
public:
    
    int dpSol(int n , vector<int>&dp){
        //base case
        if(n<=2) return n;
        
        if(dp[n] != -1) return dp[n];
        
        dp[n] = dpSol(n-1 , dp) + dpSol(n-2 , dp);
        
        return dp[n];
    }
    
    int climbStairs(int n) {
         if(n<=2)
         return n;
        vector<int>dp(n+1, -1);        
        return dpSol(n, dp);
    }
};