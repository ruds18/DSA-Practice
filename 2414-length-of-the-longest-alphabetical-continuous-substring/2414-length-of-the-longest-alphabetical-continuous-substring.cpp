class Solution {
public:
    int longestContinuousSubstring(string s) {
        int j = 0, res = 1;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] != s[j] + i - j)
            j = i;
        res = max(res, i - j + 1);
    }
    return res;
    }
};