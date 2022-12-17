//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        int totalNum = r*c;
        
        int startingRow = 0, endingRow = r-1 , startingCol = 0, endingCol = c-1;

        int cnt =0;
        vector<int>ans;
        
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

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends