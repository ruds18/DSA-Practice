//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int A[], int N, int X)
    {
        sort(A, A+N);
        int ans = 1000000;
        for(int i=0; i<N-2;i++){
            int a = i;
            int b = i+1;
            int c = N-1;
            
            while(b<c){
                int sum  = A[a]+A[b]+A[c];
                
                if(X == sum) return sum;
                if(abs(X-sum) < abs(X-ans)) ans = sum;
                
                else if(X > sum) b++;
                else c--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends