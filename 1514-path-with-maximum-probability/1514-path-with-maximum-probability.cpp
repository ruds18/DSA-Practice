class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        //adjList
        vector<pair<int,double>>adjList[n]; //Creating adjacency list
        for(int i=0;i<edges.size();i++){
            adjList[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adjList[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
                
        priority_queue<pair<double,int>>pq;
        vector<double>probability(n,-1e9);
        probability[start] =1.0;
        pq.push({1.0, start});
        
        while(!pq.empty()){
            auto node = pq.top().second;
            auto prob = pq.top().first;
            pq.pop();
            for(auto itr : adjList[node]){
                auto adjNode = itr.first;
                auto adjProb  = itr.second;
                
                if(prob * adjProb > probability[adjNode]){
                    probability[adjNode] = prob*adjProb;
                    
                    pq.push({probability[adjNode] , adjNode});
                }
            }
        }
        
        if(probability[end] != -1e9) return probability[end]; else return 0;
    }
};