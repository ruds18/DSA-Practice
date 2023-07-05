class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left=0;
        int zero_cnt=0;
        int ans =0;
        
        for(int right =0; right <n ;right++){
            if(nums[right]==0) zero_cnt++;
            
            while(left<n && zero_cnt > 1   ){
              if(nums[left] ==0){
                  zero_cnt--;
              }
                left++;
            }
            ans = max(ans,right-left);
        }
        
        return ans;
    }
};