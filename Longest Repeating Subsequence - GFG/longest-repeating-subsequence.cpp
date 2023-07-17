//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    int n = str.size();
		    vector<vector<int>>dp(n+1 , vector<int>(n+1,0));
		    
		    for(int i=dp.size()-1;i>=0;i--){
		        for(int j= dp.size()-1 ; j>=0 ;j--){
		            if(i == dp.size()-1 && j == dp.size()-1){
		                dp[i][j]=0;
		            }
		            else if(i==dp.size()-1) dp[i][j] = 0;
		            else if(j == dp.size()-1) dp[i][j] =0;
		            else{
		                if(str[i] == str[j] && i!=j) dp[i][j] = 1 + dp[i+1][j+1];
		                else dp[i][j] = max(dp[i+1][j]  , dp[i][j+1]);
		            }
		        }
		    }
		    return dp[0][0];
		}

};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends