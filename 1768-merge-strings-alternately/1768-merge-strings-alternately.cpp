class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m  = word2.size();
        string ans="";
        for(int itr = 0; itr<max(n,m); itr++){
            if(itr<n) ans.push_back(word1[itr]);
            if(itr<m) ans.push_back(word2[itr]);
        }
        return ans;
    }
};