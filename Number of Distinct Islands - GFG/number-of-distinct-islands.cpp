//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
    void dfs ( int row , int col , vector<vector<int>> &grid , vector<vector<int>> &vis , vector<pair<int,int>> &ans , int baseRow , int baseCol){
        vis[row][col] = 1;
        ans.push_back({row - baseRow , col - baseCol});
        int n = grid.size();
        int m = grid[0].size();
        int delRow[] = { -1 , 0 ,1,0};
        int delCol[] = { 0 , -1, 0 ,1};
        for( int i = 0 ; i<4 ; i++){
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
            if(nrow >=0 && nrow<n && ncol >=0 && ncol <m && !vis[nrow][ncol] && grid[nrow][ncol] == 1 ){
                dfs( nrow, ncol , grid , vis, ans , baseRow , baseCol);
            }
        }
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
         /*
            - Main idea is to store the shapes of the islands in a set.
            - Since, set contains only distinct elements, size of the set
              at the end, will be the answer.
              
            - Storing the set like this :- 
            
                - consider a base, that is, the first vertex from where
                  we are starting the dfs. (row0, col0)
                  
                - now, every 1 you can visit from this cell through dfs,
                  store their coordinates (in particular order) 
                  into a vector and this vector into the set.
                  
                  for e.g.
                  
                      0 1 2 3
                  
                0     1 1 0 0 
                1     1 0 0 0
                2     0 0 1 1
                3     0 0 1 0
        
                So, we have an island, constituted by the following 1s :
                (1) {(0,0), (0,1), (1, 0)} -- this is the shape of the island (particular order)
                
                Another island => (2) {(2,2), (2,3), (3,2)}
                
                For (2), considering (2,2) as base, on subtracting 
                this base coordinates from all the coordinates, we get,
                
                (2, 2) - (2, 2) = (0,0)
                (2,3) - (2,2) = (0,1)
                (3,2) - (2,2) = (1,0)
                
                So, {(2,2), (2,3), (3,2)} - (2,2) ====> {(0,0), (0,1), (1, 0)}
                
                   that is, Island (2) ====> Island (1)
                
                So, when stored in the set, in this way, the two islands,
                are treated as identical, and hence only 1 distinct island
                is considered as answer.
        
        */
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        set<vector<pair<int,int>>> st;
        
        for( int i = 0 ; i<n ; i++){
            for( int j =  0 ; j<m ; j++){
                if( !vis[i][j] && grid[i][j] == 1){
                    vector<pair<int,int>> store;
                    dfs( i , j , grid , vis , store,i , j);
                    st.insert(store);
                }
            }
        }
        
        // TIME COMPLEXITY 
        // For loop X set will store value + dfs call 
        //  (N X M) X log(N X M)       +    (N X M X 4)    
        return st.size();
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends