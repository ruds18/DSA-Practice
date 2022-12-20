//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
    private:
    vector<int>prevSmallerElement(int* heights , int n){
        stack<int>st;
        st.push(-1);
        // Pushing indexes
        vector<int>ans(n);
        for(int i= 0; i<n;i++){
            while(st.top() != -1 && heights[st.top()] >= heights[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    
    vector<int>nextSmallerElement(int *heights , int n){
        stack<int>st;
        // ℹ️  We have return the index not the values
        st.push(-1); // Default value
        vector<int>ans(n);
        for(int i=n-1 ;i>=0 ;i--){
            while( st.top() != -1  &&  heights[st.top()] >= heights[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    
    int histogramArea(int heights[] , int n){
        vector<int>prev(n);
        prev = prevSmallerElement(heights,n);
        
        vector<int>next(n);
        next = nextSmallerElement(heights, n);
        
        int area = INT_MIN;
        for(int i=0; i<n;i++){
            int l = heights[i];
            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i] - prev[i] -1;
            int CurArea = l*b;
            area = max(CurArea , area);
        }
        return area;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // First Row
        int area = histogramArea(M[0] , m);
        
        for(int row = 1 ;row<n;row++){
            for (int col = 0; col<m;col++){
               if(M[row][col] != 0){
                    M[row][col] = M[row][col] + M[row-1][col];
               }else{
                   M[row][col] = 0;
               }
            }
            area = max(area , histogramArea(M[row] , m));
        }
        return area;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends