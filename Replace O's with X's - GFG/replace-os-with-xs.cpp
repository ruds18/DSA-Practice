//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    private:
    void dfs(int row, int col,vector<vector<bool>> &vis,vector<vector<char>> &mat){
        vis[row][col] = true;
        int n = mat.size();
        int m = mat[0].size();
        int deltaRow[] = {-1, 0, +1, 0};
        int deltaCol[] = {0, +1, 0, -1};
        
        for(int k =0 ;k<4;k++){
            int nrow = row + deltaRow[k];
            int ncol = col + deltaCol[k];
            if(nrow >=0 && nrow<n && ncol >=0 && ncol <m && !vis[nrow][ncol] && mat[nrow][ncol] == 'O'){
                dfs(nrow, ncol, vis, mat);
            }
            }
    }
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {

       vector<vector<bool>>vis(n , vector<bool>(m, false));
       
       // Boundary O's check
       // first & last row check
       for(int col =0 ; col<m; col++){
           if(!vis[0][col] && mat[0][col] == 'O'){
               dfs(0, col, vis, mat);
           }
           
           if(!vis[n-1][col] && mat[n-1][col] == 'O'){
              dfs(n-1, col, vis, mat);
           }
       }
       // first & last col
         for(int row =0 ; row<n; row++){
           if(!vis[row][0] && mat[row][0] == 'O'){
               dfs(row, 0, vis, mat);
           }
           
           if(!vis[row][m-1] && mat[row][m-1] == 'O'){
              dfs(row, m-1, vis, mat);
           }
       }
       
       for(int i=0; i<n; i++){
           for(int j=0 ;j<m;j++){
               if(!vis[i][j] && mat[i][j] == 'O'){
                   mat[i][j] = 'X';
               }
           }
       }
       return mat;
       
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends