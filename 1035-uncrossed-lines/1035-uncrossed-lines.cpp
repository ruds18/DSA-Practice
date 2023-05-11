class Solution {
public:
    int solve(int index1,int index2 , vector<int>nums1,vector<int>nums2 , vector<vector<int>>&dp){
        //base case
        if(index1 < 0 || index2 <0) return 0;
        
        if(dp[index1][index2] != -1) return dp[index1][index2];
        int not_take =  0 + max(solve(index1-1 , index2,nums1,nums2,dp) , solve(index1, index2-1 , nums1,nums2 ,dp));
        int take = 0;
        if(nums1[index1] == nums2[index2]){
            take = 1 + solve(index1-1 , index2-1 , nums1 , nums2,dp);
        }
            
        return  dp[index1][index2] = max(not_take,take);
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m  = nums2.size();
     vector<vector<int>>dp(n,vector<int>(m,-1));
    return solve(n-1,m-1, nums1,nums2 , dp);
    }
};