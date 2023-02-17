class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        int longestCnt=0;
        for(int i=0; i<s.length();i++){
            set<int>st;
            int cnt =0;
            for(int j=i; j<s.length();j++){
                st.insert(s[j]);
                cnt++;
                if(st.size() != cnt) {
                    cnt--;
                    break;
                };
            }
            longestCnt = max(longestCnt , cnt);
            }
        return (longestCnt == 0 ? 1 : longestCnt);
    }
};