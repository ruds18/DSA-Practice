//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
     long long solve(int i , int j , int arr[],vector<vector<int>>&dp){
         //base case
         if(i>j) return 0;
         
         if(dp[i][j] != -1) return dp[i][j];
         long long x = arr[i] + min(solve(i+2,j,arr,dp) , solve(i+1,j-1,arr,dp));
         long long y = arr[j] + min(solve(i+1,j-1,arr,dp) , solve(i,j-2,arr,dp));
         
         return dp[i][j] =  max(x,y);
     }
    
    long long maximumAmount(int arr[], int n){
        vector<vector<int>>dp(n, vector<int>(n,-1));
       return solve(0,n-1,arr,dp);
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends