class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum =0;
        
        for(int row=0; row<n; row++){
            sum += mat[row][row];
            sum += mat[row][n - row -1];
        }
        if(n%2 != 0) sum -= mat[n/2][n/2];
        
        return sum;
    }
};