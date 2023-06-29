class Solution {
public:
    
    int solve(vector<int>piles , vector<int>suffixSum , int index , int m , vector<vector<int>>&dp){
        //base case
        if(index >= piles.size()) return 0;
        if(index + 2*m >= piles.size()) return suffixSum[index];
        if(dp[index][m] != -1) return dp[index][m];
        int result =0;
        for(int x=1 ; x <= 2*m ; x++){
     result  = max(result , suffixSum[index] - solve(piles , suffixSum , index+x , max(x,m),dp));
        }
        return  dp[index][m] =  result;
    }
    
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        int m=1;
        
        vector<vector<int>>dp(n ,  vector<int>(n,-1));
        
        vector<int>suffixSum(n);
        suffixSum[n-1] = piles[n-1];
        for(int i = n-2;i>=0; i--){
            suffixSum[i] = suffixSum[i+1] + piles[i];
        }
        
        return solve(piles , suffixSum , 0 , m,dp);
    }
};