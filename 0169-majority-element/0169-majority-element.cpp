class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0;
      int reqCnt = nums.size()/2;
        
      
      unordered_map<int, int>mp;
      for(auto i:nums){
          mp[i]++;
      }
        
     for(auto x:mp){
         if(x.second > reqCnt){
             ans = x.first;
             break;
         }
     }
        return ans;
    }
};