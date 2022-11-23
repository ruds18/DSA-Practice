//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
              int curReach =0 , jumps = 0, maxReach = 0;
        
        for(int i =0; i<n-1; i++){
            
            maxReach = max(maxReach, i+arr[i]);
            if(i == curReach){
                jumps++;
                curReach = maxReach;
            }
            
            
        }
        if(curReach >= n-1){
          return jumps;
        }
      
      return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends