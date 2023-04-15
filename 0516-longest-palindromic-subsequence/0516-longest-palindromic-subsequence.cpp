class Solution {
public:
    int longestPalindromeSubseq(string s) {
        // tabular method for dp - lcs
        string text2 =s;
        reverse(text2.begin(), text2.end());
        int n  = s.size();
        vector<vector<int>>dp(n+1 , vector<int>(n+1,0));

        
        for(int i=0; i<n;i++){
            dp[i][0]=0;
            dp[0][i] =0;
        }

        for(int i=1; i<=n;i++){
            for(int j=1;j<=n;j++)
          if(s[i-1] == text2 [j-1]) dp[i][j] = 1+dp[i-1][j-1];
            else
                dp[i][j] = 0+max(dp[i-1][j] , dp[i][j-1]);
        }
        return dp[n][n];
    }
};