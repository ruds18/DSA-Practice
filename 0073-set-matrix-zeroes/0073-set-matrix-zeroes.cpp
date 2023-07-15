class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>>zeroCoordinates;
        for(int i=0; i<n;i++){
            for(int j =0; j<m;j++){
                if(matrix[i][j] == 0){
                    zeroCoordinates.push_back({i,j});
                }
            }
        }
        
        for(auto itr:zeroCoordinates){
            // Row -> 0
            for(int col = 0 ; col<m;col++){
                matrix[itr.first][col]=0;
            }
            //Col -> 0
            for(int row =0; row<n;row++){
                matrix[row][itr.second] =0;
            }
        }
    }
};