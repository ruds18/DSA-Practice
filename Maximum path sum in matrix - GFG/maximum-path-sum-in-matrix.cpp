//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(vector<vector<int>> &m, int row, int col, vector<vector<int>> &dp) {
        int n = m.size();
        
        if(row == n-1) return dp[row][col] = m[row][col];
        
        
        if(dp[row][col] != INT_MIN) return dp[row][col];
        
        int dir[3] = {0, -1, 1};
        
        int temp = INT_MIN;
        for(int i = 0; i < 3; ++i) {
            int nrow = row+1;
            int ncol = col + dir[i];
            
            if(nrow >= 0 and nrow < n and ncol >= 0 and ncol < n) {
                // cout << temp << endl;
                temp = max(temp, m[row][col] + solve(m, nrow, ncol, dp));
            }
        }
        
        return dp[row][col] = temp;
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int ans = 0;
        vector<vector<int>> dp(N, vector<int>(N, INT_MIN));
        
        for(int col = 0; col < N; ++col) {
            ans = max(ans, solve(Matrix, 0, col, dp));
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends