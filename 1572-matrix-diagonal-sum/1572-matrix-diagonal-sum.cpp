class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int sum=0;
        
        for(int row =0 ; row< n;row++){
            for(int col =0; col<m;col++){
                sum += mat[row][row];
                break;
            }
        }
        
         for(int row =0 ; row< n;row++){
            for(int col =m-1; col>=0;col--){
                sum += mat[row][col-row];
                break;
            }
        }
        
        if(n%2 != 0){
         int middle = mat[n/2][m/2];
         sum -= middle;
        }
     
        
        return sum;
    }
};