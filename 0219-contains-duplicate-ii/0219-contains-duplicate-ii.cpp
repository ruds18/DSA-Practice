class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        
        for(int i=0 ;i<nums.size();i++){
            //  present in container
            if(mp.count(nums[i]) == 1){
                int diff = abs(i - mp[nums[i]]);
                if(diff <=k ) return true;
            }
                mp[nums[i]] = i;
        }
        return false;
    }
};