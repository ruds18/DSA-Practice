class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
       vector<int> ans;
        int row = arr.size(), col = arr[0].size(), cnt = 0 ;
        int totalNum = row*col;
        int startingRow = 0 , endingRow = row-1;
        int startingCol = 0 , endingCol = col-1;
        
        while(cnt < totalNum){
            //Traversing the FIRST ROW
            for(int i =startingCol ; i<=endingCol && cnt<totalNum ; i++){
                ans.push_back(arr[startingRow][i]);
                cnt++;
            }
            startingRow++;
            
            //Traversing the RIGHT COULUMN
            for(int i =startingRow; i<=endingRow && cnt<totalNum ; i++ ){
                ans.push_back(arr[i][endingCol]);
                cnt++;
            }
            endingCol--;
            
            //Traversing the BOTTOM ROW
            for(int i =endingCol  ;i >=startingCol && cnt<totalNum ; i--){
                ans.push_back(arr[endingRow][i]);
                cnt++;
            }
            endingRow--;
            
             //Traversing the LEFT COULUMN
            for(int i =endingRow; i >= startingRow && cnt<totalNum ; i-- ){
                ans.push_back(arr[i][startingCol]);
                cnt++;
            }
            startingCol++;
        }
        
        return ans;
    }
};