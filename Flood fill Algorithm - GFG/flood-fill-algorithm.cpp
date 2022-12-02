//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    void fillColorDFS(vector<vector<int>> &ans , vector<vector<int>>& image , int iColor , int row, int col , int newcolor , int deltaRow[], int deltaCol[]){
        ans[row][col] = newcolor;
        
        // adjacency element check
        for(int k=0; k<4 ;k++){
            int nRow = row + deltaRow[k];
            int nCol = col + deltaCol[k];
            
            if(nRow >=0 && nRow < image.size() && nCol >=0 && nCol < image[0].size() && image[nRow][nCol] == iColor && ans[nRow][nCol] != newcolor ){
                fillColorDFS(ans, image , iColor, nRow, nCol , newcolor, deltaRow , deltaCol);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       int iColor = image[sr][sc];
       vector<vector<int>> ans = image;
       int deltaRow[] ={-1, 0, +1 , 0};
       int deltaCol[]={0, +1,0,-1};
        fillColorDFS(ans , image ,  iColor , sr , sc ,newColor, deltaRow, deltaCol );
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends