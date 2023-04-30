class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        int itr1 = 0, itr2=0;
        while(itr1<n && itr2<m){
            if(s[itr1] == t[itr2]){
                itr1++;
                itr2++;
            }
            else{
                itr2++;
            }
        }
        if(itr1==n) return true; else return false;
    }
};