//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        if( r > n) return 0;
        r = min(r,  n-r);
        int mod = 1e9 + 7;
        vector<int>dp(r+1,0);
        dp[0]=1; // 0C0 = 1
        
        for(int row=1;  row<=n;row++){
            for(int col = r ; col>=0;col--){
                dp[col] =( dp[col] + dp[col-1])%mod; 
            }
        }
        return dp[r];
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends