class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        
        for(int i=0 ;i<nums.size();i++){
            // not present in container
            if(mp.count(nums[i]) == 0)
                mp[nums[i]] = i;
            else if(i - mp[nums[i]] <= k)
                return true;
            else
                mp[nums[i]] = i;
        }
        return false;
    }
};