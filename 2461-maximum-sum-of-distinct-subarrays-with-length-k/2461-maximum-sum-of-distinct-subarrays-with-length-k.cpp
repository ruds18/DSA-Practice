class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int, int>mp;
        long long maxi = 0;
        long long sum = 0;
        
        // storing first k elements
        for(int i=0; i<k-1;i++){
            mp[nums[i]]++;
            sum += nums[i];
        }
        
        for(int i = k-1 ; i<nums.size(); i++){
            mp[nums[i]]++;
            sum += nums[i];
            
            if(mp.size() == k) maxi = max(sum, maxi);
            
            if(mp[nums[i-k+1]] == 1) mp.erase(nums[i-k+1]);
            else mp[nums[i-k+1]]--;
            
            sum -= nums[i-k+1];
            
        }
        return maxi;
    }
};