class Solution {
public:
    
    int solve(vector<int>&coins, int amount, vector<int>&dp){
        //base case
        if(amount  == 0 ) return 0;
        if(amount < 0) return INT_MAX;

        int ans = INT_MAX;
        
        if(dp[amount] != -1) return dp[amount];

        for(int i=0; i<coins.size(); i++){
             int output =   solve(coins , amount - coins[i],dp);
             if(output != INT_MAX){
                ans = min(ans, output+1);
             }
        }
        
        return dp[amount] = ans;
       
    }
    
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1, -1);
        int ans = solve(coins , amount,dp);
        if(ans != INT_MAX ) return ans; else return -1;
    }
};