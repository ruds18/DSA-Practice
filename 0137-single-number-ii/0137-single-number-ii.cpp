class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(auto itr : nums)mp[itr]++;
        
        for(auto itr : mp) if(itr.second == 1) return itr.first;
        
        return -1;
    }
};