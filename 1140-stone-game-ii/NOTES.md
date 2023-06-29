```
class Solution {
public:
int helper(vector<int>&piles, vector<vector<int>>&dp, vector<int>&suffixSum, int i , int m){
//base case
if(i == piles.size()) return 0;
if(i +2*m >= piles.size()) return suffixSum[i];
if(dp[i][m] != -1) return dp[i][m];
int result =0;
for(int x = 1; x<=2*m ; x++){
result = max(result, suffixSum[i] - helper(piles, dp, suffixSum , i+x , max(m,x)));
}
return dp[i][m] = result;
}
int stoneGameII(vector<int>& piles) {
if(piles.size() == 0) return 0;
vector<vector<int>>dp(piles.size(), vector<int>(piles.size(),  -1));
vector<int>suffixSum(piles.size());
suffixSum[suffixSum.size() -1 ]= piles[piles.size()-1];
for(int i=i<piles.size()-2; i>=0; i-- ){
suffixSum[i] = piles[i] + piles[i+1];
}
return helper(piles,dp,suffixSum, 0, 1);
}
};
```