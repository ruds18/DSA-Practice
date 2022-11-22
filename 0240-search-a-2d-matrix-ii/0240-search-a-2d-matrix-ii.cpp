class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int rows = matrix.size()-1;
      int rowIndex = 0, colIndex = matrix[0].size()-1;
        
     while(rowIndex <=rows && colIndex >= 0){
         int element = matrix[rowIndex][colIndex];
         if(target == element) return true;
         else if(target < element){
             colIndex--;
         }else{
             rowIndex++;
         }
     }
     
        
     return false;
        
    }
};