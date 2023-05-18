class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        
        unordered_map<int,int>indegree;
        
        for(auto edge : edges){
            indegree[edge[1]]++;
        }
        
        for(int i=0; i<n;i++){
            if(indegree[i] == 0) ans.push_back(i);
        }
        return ans;
    }
};