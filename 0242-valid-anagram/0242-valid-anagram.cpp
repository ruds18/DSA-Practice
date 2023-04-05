class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int>mp;
        int m = t.size();
        int n = s.size();
        
        if(n != m) return false;
        // s
        for(auto ch : s) mp[ch]++;
        
        for(int i=0 ; i<s.size();i++){
            char ch = t[i];
            mp[ch]--;
            if(mp[ch] < 0) return false;
            
        }
        return true;
    }
};