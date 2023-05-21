class Solution {
public:
    
    queue<pair<int, int>> q; // queue
    
    void dfs(vector<vector<int>>& grid, int i, int j) { // for marking the 1st island visited
        
        if (i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j] == 2 or grid[i][j] == 0)
            return;
        
        grid[i][j] = 2; // marking them visited
        q.push({i,j}); // adding them to queue
        
        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }
    
    int bfs(vector<vector<int>>& grid){ // finding the nearest bridge between visited island and unvisited island
        
        int d = 0; // dist
        int mindist = INT_MAX; // to store minimum distance
        
        vector<vector<int>> dir = {{1,0}, {0,1}, {-1,0}, {0,-1}};
        
        while (!q.empty()){
            int n = q.size();
            
            while(n-- > 0){
                auto a = q.front();
                q.pop();

                for (int h=0; h<4; h++) {
                    int x = dir[h][0] + a.first;
                    int y = dir[h][1] + a.second;
                    
                    if (x>=0 and x<grid.size() and y>=0 and y<grid[0].size() and grid[x][y] == 1) { // if the neighbor is 1, then check if its minimum distance
                        mindist = min(mindist, d);
                    }

                    else if (x>=0 and x<grid.size() and y>=0 and y<grid[0].size() and grid[x][y] == 0) { // if the neighbor is 0, then mark it visited and add it to queue
                        q.push({x, y});
                        grid[x][y] = 2;
                    }
                }
            }
            d++; // increasing each level by distance + 1
        }
        
        return mindist; // returning min dist found till end
    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        
        bool flag = false;
        
        for (int i=0; i<grid.size(); i++){
            for (int j=0; j<grid[0].size(); j++){
                if (grid[i][j] == 1 and !flag){ // found 1st '1' in the matrix
                    dfs(grid, i, j); // dfs for marking the whole island visited
                    q.push({i,j});
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        
        return bfs(grid); // bfs for getting min dist and returning it
    }
};