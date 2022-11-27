class Solution {
public:
    int appendCharacters(string s, string t) {
        int j = 0;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == t[j]) j++;
            if(j == t.size()) return 0;
        }
        return t.size() - j;
    }
};