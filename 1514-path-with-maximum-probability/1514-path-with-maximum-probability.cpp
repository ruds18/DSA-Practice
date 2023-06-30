class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        //adj List
        unordered_map<int, vector<pair<int,double>>>adjList;
        for(int i=0; i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            double prob = succProb[i];
            
            adjList[u].push_back({v, prob});
            adjList[v].push_back({u,prob});
            
        }
        
        //max heap
        priority_queue<pair<double,int>>pq;
        pq.push({1.0, start});
        vector<double>probability(n,-1e9);
        
        while(!pq.empty()){
            int node = pq.top().second;
            double prob = pq.top().first;
            pq.pop();
            for(auto itr: adjList[node]){
                int adjNode = itr.first;
                double adjProb = itr.second;
                
                if(prob*adjProb > probability[adjNode]){
                    probability[adjNode] = prob*adjProb;
                    pq.push({probability[adjNode] , adjNode});
                }
            }
        }
        if(probability[end] != -1e9) return probability[end]; else return 0;
    }
};