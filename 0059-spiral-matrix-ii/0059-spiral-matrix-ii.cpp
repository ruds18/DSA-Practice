class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int startingRow = 0 ,endingRow = n-1, startingCol =0  , endingCol = n-1;
        int totalElements = n*n , count =1;
        vector<vector<int>>ans(n,vector<int>(n,-1));

        while(count <= totalElements){
            //start row
            for(int col =startingCol; col<=endingCol && count <= totalElements ; col++){
                ans[startingRow][col] = count;
                count++;
            }
            startingRow++;


            
            //end col
            for(int row = startingRow; row<=endingRow && count <= totalElements  ; row++){
                ans[row][endingCol] = count;

                count++;
            }
            endingCol--;
        

            
            //end row
            for(int col = endingCol; col>=startingCol && count <= totalElements ; col--){
                ans[endingRow][col] = count;
                count++;
            }
             endingRow--;
 
            
            // start col 
            for(int row = endingRow ; row>=startingRow && count <= totalElements  ; row--){
                ans[row][startingCol] = count;
                count++;
            }
            startingCol++;

        }
        return ans;
    }
};