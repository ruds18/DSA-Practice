class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxi =0, sum =0;
        unordered_map<long,long>mp;
        
        //storing first K-1 element
        for(int i=0 ;i<k-1; i++){
            mp[nums[i]]++;
            sum += nums[i];
        }
        
        // Sliding window approach
        for(int i=k-1; i<nums.size(); i++){
            mp[nums[i]]++;
            sum += nums[i];
            
            if(mp.size() == k) maxi = max(maxi, sum);
            
            if(mp[nums[i-k+1]] == 1) mp.erase(nums[i-k+1]);
            //duplicate element
            else mp[nums[i-k+1]]--;
            
            sum -= nums[i-k+1];
        }
        return maxi;
    }
};