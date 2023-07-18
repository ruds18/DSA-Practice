//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool solve(vector<int>arr,int sum , int index , vector<vector<int>>&dp){
        //base case
        if(sum == 0) return true;
        if(index==0) return false;
         
         if(dp[index][sum] != -1) return dp[index][sum];
        
        if(arr[index-1] <= sum){
            return dp[index][sum] =  solve(arr,sum - arr[index-1] , index-1 , dp) ||
            solve(arr,sum , index-1,dp);
        }else{
            return dp[index][sum] = solve(arr,sum,index-1,dp);
        }
    }

    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
       vector<vector<int>>dp(n+1, vector<int>(sum+1 ,-1));
       return solve(arr,sum,n,dp);
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends