class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int n = s.size();
        vector<int>freq(26,0);
        int maxChar_cnt=0;
        int ans=0;
        for(int right=0; right<n;right++){
            freq[s[right]-'A']++;
            maxChar_cnt = max(maxChar_cnt,freq[s[right]-'A']);
            int window_len = right-left+1;
            while(window_len - maxChar_cnt > k){
                freq[s[left]-'A']--;
                left++;
                window_len = right-left+1;
            }
            ans = max(ans, window_len);
        }
        return ans;
    }
};