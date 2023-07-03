//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
    
       vector<vector<int>>dp(m+1, vector<int>(n+1, 0));
       
       for(int index1=1;index1 <= m ;index1++){
           for(int index2=1;index2<=n;index2++){
               if(X[index1-1] == Y[index2-1])
                    dp[index1][index2] = 1 + dp[index1-1][index2-1];
                else 
                    dp[index1][index2] = max(dp[index1-1][index2], dp[index1][index2-1]);
           }
       }
       
       return (n+m - dp[m][n]);
    }
};


//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends