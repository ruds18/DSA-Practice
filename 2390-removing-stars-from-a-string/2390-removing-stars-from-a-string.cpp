class Solution {
public:
    string removeStars(string s) {
         int j = 0;
        for(auto c: s){
            if (c == '*') j--;
            else s[j++] = c;
        }
        return s.substr(0, j);
    }
};