//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int n = grid.size();
	    int m = grid[0].size();
	   vector<vector<bool>>vis(n, vector<bool>(m, false));
	   vector<vector<int>>ans(n, vector<int>(m, 0));
	   queue<pair<pair<int, int>, int>>q;
	   int steps = 0;
	   for(int row = 0; row<n; row++){
	       for(int col =0 ;col<m; col++){
	           // search for 1
	           if(grid[row][col] == 1 && !vis[row][col]){
	               q.push({{row, col}, steps});
	               vis[row][col] = true;
	           }
	       }
	   }
	   int deltaRow[] ={-1, 0, +1, 0};
	   int deltaCol[] = {0, +1, 0, -1};
	   
	   while(!q.empty()){
	       int row = q.front().first.first;
	       int col = q.front().first.second;
	       steps= q.front().second;
	       ans[row][col] = steps;
	       q.pop();
	       for(int k=0; k<4; k++){
	       int nrow = row + deltaRow[k];
	       int ncol = col + deltaCol[k];
	       if(nrow>=0 && nrow<n && ncol >=0 && ncol < m && grid[nrow][ncol] == 0 && !vis[nrow][ncol]){
	           q.push({{nrow, ncol}, steps+1});
	           vis[nrow][ncol] = true;
	       }
	   }
	   }
	   return ans;
	   
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends