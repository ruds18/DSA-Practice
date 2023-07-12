class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        int count=0;
        for(int diagonal =0 ; diagonal<n;diagonal++){
            for(int index1=0 , index2 = diagonal ; index2<n ; index1++ , index2++){
                if(diagonal ==0 ){
                    dp[index1][index2] = true;
                }
                else if(diagonal == 1){
                   dp[index1][index2]  =  s[index1]==s[index2];
                }else{
                    if(s[index1] == s[index2] && dp[index1+1][index2-1]){
                        dp[index1][index2] = true;
                    }
                }
                if(dp[index1][index2]) count++;
            }
        }
        return count;
    }
};