class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        //Reversing the array
        reverse(matrix.begin(), matrix.end());
        //Now swapping through the line of symmetry
        for(int i=0; i<row;i++){
            for(int j=i+1; j<col;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
    }
};