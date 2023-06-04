class Solution {
public:
    void dfs(int node , vector<bool>&visited, unordered_map<int,vector<int>>adjList){
        visited[node] = true;
        for(auto nextNode : adjList[node]){
            if(!visited[nextNode]){
                dfs(nextNode,visited,adjList);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        unordered_map<int,vector<int>>adjList;
        
        for(int i=0; i<n;i++){
          for(int j=0; j<n;j++){
              if(isConnected[i][j] == 1 && i!=j){
                  adjList[i].push_back(j);
                  adjList[j].push_back(i);
              }
          } 
        }
        int ans=0;
        
        // dfs search
        vector<bool>visited(n);
        
        for(int i=0; i<n;i++){
          if(!visited[i]){
              ans++;
              dfs(i, visited, adjList);
          }
        }
        
        
        return ans;
    }
};