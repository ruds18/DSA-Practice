}
int countPaths(vector<vector<int>>& grid) {
int n = grid.size();
int m = grid[0].size();
int ans =0;
vector<vector<int>>dp(n, vector<int>(m, 1));
//step -1
sort(grid.begin(), grid.end());
// step -2
for(int i =0; i<n;i++){
for(int j = 0; j<m ;j++){
dfs(i,j,grid,dp);
}
}
// step - 3
for(int i=0; i<n;i++){
for(int j = 0 ;j<m;j++){
ans += dp[i][j];
ans %= mod;
}
}
return ans;
}
};
```