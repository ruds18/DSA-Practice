class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s2.size();
        int k = s1.size();
        vector<int>s1_freq(26,0);
        vector<int>s2_freq(26,0);
        
        if(n < k) return false;
        
        // first k window
        for(int i=0; i<k;i++){
            s1_freq[s1[i]-'a']++;
            s2_freq[s2[i]-'a']++;
        }
        if(s1_freq == s2_freq) return true;
        
        //sliding window
        for(int i =k; i<n;i++){
            s2_freq[s2[i]-'a']++;
            s2_freq[s2[i-k]-'a']--;
            
            if(s1_freq == s2_freq) return true;
        }
        return false;
    }
};