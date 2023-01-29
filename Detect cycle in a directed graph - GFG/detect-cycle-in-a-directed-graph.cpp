//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool dfs(vector<int> adj[], vector<bool> &visited, vector<bool>&dfsVisited, int node){
        visited[node] = true;
        dfsVisited[node] = true;
        
        for(auto iter: adj[node]){
            if(!visited[iter]){
                bool cycle = dfs(adj,visited, dfsVisited, iter);
                if(cycle) return true;
            }else if(dfsVisited[iter] == true){
                //visited true
                return true;
            }
        }
        dfsVisited[node] = false;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool>visited(V);
        vector<bool>dfsVisited(V);
        
        for(int i=0; i<V;i++){
            if(!visited[i]){
                bool isCycleDetected = dfs(adj, visited, dfsVisited,i);
                 if(isCycleDetected) return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends