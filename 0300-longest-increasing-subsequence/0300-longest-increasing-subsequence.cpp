class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int  n = nums.size();
        // tabulation
        vector<vector<int>>dp(n+1 , vector<int>(n+1,0));
        
        for(int index = n-1 ; index >= 0 ; index --){
            for(int prev_index = index-1 ; prev_index >= -1 ; prev_index--){
                int not_take = 0 + dp[index+1][prev_index+1];
                int take  = INT_MIN;
                if(prev_index == -1 || nums[index] > nums[prev_index]){
                    take =  1 + dp[index+1][index+1];
                }
                dp[index][prev_index+1] = max(take,not_take);
            }
        }
        return dp[0][-1+1];
    }
};