class Solution {
public:
    int balancedString(string s) {
        unordered_map<int,int>mp;
        for(auto ch:s){
            mp[ch]++;
        }
        int k = (s.size())/4;
        int left=0;
        int ans=INT_MAX;
        
        for(int right=0; right<s.size();right++){
            auto ch = s[right];
            mp[ch]--;
            
            while(left< s.size() && mp['R']<=k && mp['E'] <=k && mp['Q']<=k && mp['W'] <= k){
                ans = min(ans , right-left+1);
                mp[s[left]]++;
                left++;
            }
        }
        return ans;
    }
};