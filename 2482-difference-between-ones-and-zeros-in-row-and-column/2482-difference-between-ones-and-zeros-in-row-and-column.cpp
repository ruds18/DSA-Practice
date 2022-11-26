class Solution {
public:
   vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<int> oris(m, 0), ocjs(n, 0), zris(m, 0), zcjs(n, 0);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    oris[i]+=1;
                    ocjs[j]+=1;
                }
                if(grid[i][j]==0){
                    zris[i]+=1;
                    zcjs[j]+=1;
                }
            }
        }
        
        for(int x=0; x<m; x++){
            for(int j=0; j<n; j++){
                grid[x][j]=oris[x]+ocjs[j]-zris[x]-zcjs[j];
            }
        }
        return grid;
    }
};