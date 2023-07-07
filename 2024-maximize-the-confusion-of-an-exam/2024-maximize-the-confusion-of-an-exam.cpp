class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int left=0;
        int n = s.size();
        vector<int>freq(26,0);
        int maxCnt=0;
        int ans=0;
        for(int right=0; right<n;right++){
            freq[s[right]-'A']++;
            maxCnt = max(maxCnt , freq[s[right]-'A']);
            int windowSize = right-left+1;
            
            while(left<n && windowSize - maxCnt > k){
                freq[s[left]-'A']--;
                left++;
                windowSize = right-left+1;
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};