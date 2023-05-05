class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int k= p.size();
        vector<int>ans;
        
        if(n < k) return ans;
        
        vector<int>s_freq(26,0);
        vector<int>p_freq(26,0);
        
        // first k window
        for(int i=0; i<k;i++){
            s_freq[s[i]-'a']++;
            p_freq[p[i] - 'a']++;
        }
        if(s_freq == p_freq) ans.push_back(0);
        
        //sliding window
        for(int i=k;  i<n;i++){
            s_freq[s[i-k]-'a']--;
            s_freq[s[i] - 'a']++;
            
            if(s_freq == p_freq) ans.push_back(i-k+1);
        }
        return ans;
    }
};