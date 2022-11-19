class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0;
        
      
      unordered_map<int, int>mp;
      for(auto i:nums){
          mp[i]++;
      }
        
     for(auto x:mp){
         if(x.second > nums.size()/2){
             ans = x.first;
             break;
         }
     }
        return ans;
    }
};