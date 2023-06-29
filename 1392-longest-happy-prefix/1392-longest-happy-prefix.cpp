class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
        int len=0;
        int i=1;
        vector<int>lps(n,0);
        
        while(i<n){
            if(s[i] == s[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len != 0){
                    len = lps[len-1];
                }else{
                    lps[i]=0;
                    i++;
                }
            }
        }

      int maxIndex = lps[n-1];
        
        return s.substr(0,maxIndex);
    }
};