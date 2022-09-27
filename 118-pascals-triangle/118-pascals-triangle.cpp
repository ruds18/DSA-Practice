class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        //first row i.e row[0] =1
        ans[0].push_back(1);
        
     //row starting will start from 2 i.e row[1] , since 1st Row is filled with 1 above;
        for(int row=1; row<numRows ;row++){
            //Filling the first column with one
            ans[row].push_back(1);
            //Since first col is filled with one
            for(int col=1; col<row; col++){
                ans[row].push_back(ans[row-1][col-1] + ans[row-1][col]);
            }
            //Filling last column with one;
            ans[row].push_back(1);
        }
        return ans;
    }
};