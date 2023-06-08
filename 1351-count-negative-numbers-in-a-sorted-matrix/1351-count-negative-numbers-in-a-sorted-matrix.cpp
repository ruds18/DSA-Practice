class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int ans =0;
        // brute force
        for(int row =0; row<n;row++){
            for(int col =0; col<m;col++){
                if(grid[row][col] < 0) ans++;
            }
        }
        return ans;
    }
};