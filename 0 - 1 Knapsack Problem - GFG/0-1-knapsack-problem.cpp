//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    int solve(int wt[] , int val[] , int n , int weight , int index , vector<vector<int>>&dp){
        //base case
        if(index == 0){
            if(weight>= wt[index]) return val[index];
            else return 0;
        }
        if(dp[index][weight] != -1) return dp[index][weight];
        int not_pick = 0 + solve(wt, val,n , weight , index-1 , dp);
        int pick =0;
        
        if(weight >= wt[index]){
            pick = val[index] + solve(wt,val,n,weight-wt[index] , index-1,dp);
        }
        
        return dp[index][weight] =  max(pick,not_pick);
    }
    
    
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>>dp(n , vector<int>(W+1 , -1));
       
       return solve(wt,val,n,W,n-1,dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends