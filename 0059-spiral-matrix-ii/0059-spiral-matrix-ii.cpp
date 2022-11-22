class Solution {
public:

    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> result (n, vector<int>(n));
        int cnt = 1;
        int startingRow =0, startingCol =0 , endingRow = n-1 , endingCol = n-1;
        
        while(cnt<=n*n){
         for(int i = startingCol  ; i<=endingCol ; i++){
             result[startingRow][i] = cnt++;
         }
         startingRow++;
            
        for(int i = startingRow ; i<=endingRow ; i++){
            result[i][endingCol] = cnt++;
        }
        endingCol--;
         
        for(int i=endingCol; i>=startingCol; i--){
            result[endingRow][i] = cnt++;
        }
        endingRow--;
        
        for(int i=endingRow ; i>=startingRow ; i--){
            result[i][startingCol] = cnt++;
        }
         
        startingCol++;
            
        }

        return result;
    }
};