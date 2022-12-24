class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int>mp;
        
        // Step 1
        for(auto i :s){
            mp[i]++;
        }
        int ans =0;
        
        for(auto v:mp){
            ans += (v.second / 2) * 2;
            if(ans %2  == 0 && v.second%2 == 1) ans++;
        }
        return ans;
    }
};