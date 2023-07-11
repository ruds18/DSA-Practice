//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        int ans=0;
        for(int index1 =1;index1<=n;index1++){
            for(int index2=1; index2<=m;index2++){
                if(S1[index1-1] == S2[index2-1]){
                    dp[index1][index2] = 1 + dp[index1-1][index2-1];
                    ans = max(ans,dp[index1][index2]);
                }
                else dp[index1][index2]=0;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends