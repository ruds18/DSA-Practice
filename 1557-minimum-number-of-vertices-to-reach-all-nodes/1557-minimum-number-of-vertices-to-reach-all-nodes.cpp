class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        
        unordered_map<int,int>indegree;
        unordered_map<int,bool>visited;
        for(auto edge : edges){
            indegree[edge[1]]++;
            //for disconected components
            visited[edge[1]] = true;
            visited[edge[0]] = true;
        }
        
        for(int i=0; i<n;i++){
            if(!visited[i] ||  indegree[i] == 0) ans.push_back(i);
        }
        return ans;
    }
};