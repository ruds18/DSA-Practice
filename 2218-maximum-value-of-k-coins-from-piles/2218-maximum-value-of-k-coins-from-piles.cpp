class Solution {
public:
    int solve(vector<vector<int>>&dp,vector<vector<int>>&p,int k , int i){
        //base case
        if(i>=p.size()) return 0;
        if(dp[i][k] != -1) return dp[i][k];
        
        int maxi=0;
        maxi = max(maxi,solve(dp ,p,k,i+1));
        
        for(int j=0;j<p[i].size();j++){
            if(j+1<=k){
                maxi = max(maxi,p[i][j] + solve(dp ,p,k-j-1 , i+1));
            }else{
                break;
            }
        }
        return dp[i][k] = maxi;
    }
    
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        //prefix sum
        for(int i = 0;i<piles.size();i++){
            for(int j = 1; j <piles[i].size();j++){
                piles[i][j] = piles[i][j] + piles[i][j-1];
            }
        }
        int n = piles.size();
            vector<vector<int>>dp(1001 , vector<int>(2001 , -1));


        return solve(dp,piles,k,0);
    }
};