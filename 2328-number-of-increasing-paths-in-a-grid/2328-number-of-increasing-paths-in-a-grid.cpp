class Solution {
public:
    int dp[1000][1000] = {}, mod = 1000000007;
int dfs(vector<vector<int>>& g, int i, int j, int v) {
    if (min(i, j) < 0 || i >= g.size() || j >= g[i].size() || g[i][j] <= v)
        return 0;
    return dp[i][j] ?: dp[i][j] = (1LL + dfs(g, i + 1, j, g[i][j]) + dfs(g, i - 1, j, g[i][j]) 
        + dfs(g, i, j + 1, g[i][j]) + dfs(g, i, j - 1, g[i][j])) % mod;
}
int countPaths(vector<vector<int>>& g) {
    int m = g.size(), n = g[0].size(), res = 0;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            res = (res + dfs(g, i, j, 0)) % mod;
    return res;
}
};