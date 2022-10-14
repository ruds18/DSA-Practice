class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // int row = numRows-1, col = numRows[1].size-1;
       
        vector<vector<int>> ans(numRows);
        
        ans[0].push_back(1) ; // zero th row
        
        for(int row =1; row< numRows ;row++){
            ans[row].push_back(1);
            for(int col = 1; col<row;col++ ){
                ans[row].push_back(ans[row-1][col-1] + ans[row-1][col]);
            }
            ans[row].push_back(1);
        }
        return ans;
    }
};