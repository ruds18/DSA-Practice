class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int n = nums.size();
        int sum=0;
        int ans=INT_MAX;
        for(int right=0;right<n;right++){
           sum += nums[right];
            
            while(sum >=target){
                ans = min(ans , right-left+1);
                sum -= nums[left];
                left++;
            }
          
        }
        return ans == INT_MAX ? 0 : ans;
    }
};