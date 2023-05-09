//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
     int maxIndexDiff(int A[], int N) {
    int ans = 0, i = 0, j = N - 1;
    while (i <= j){
        if (A[i] <= A[j]){
            ans = max(ans, j - i);
            i++;
            j = N - 1;
        }
        else
            j--;
    }
    return ans;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends