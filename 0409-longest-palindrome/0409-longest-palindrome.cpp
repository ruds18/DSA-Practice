class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int>mp;
        
        // Step 1
        for(auto i :s){
            mp[i]++;
        }
        int ans =0;
        bool oddFound = false;
        for(auto cnt :mp){
            // Even
            if(cnt.second % 2 == 0){
                ans += cnt.second;
            }else{
                // Odd
                oddFound = true;
                ans += cnt.second-1;
            }
        }
        if(oddFound) ans++;
        
        return ans;
    }
};