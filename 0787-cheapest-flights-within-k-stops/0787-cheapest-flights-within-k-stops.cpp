class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
          // create adjacency list
        unordered_map<int,vector<pair<int, int>>> adjList;
        for( auto f : flights )
            adjList[f[0]].push_back( { f[1], f[2] } );
        
        // minHeap based on cost of distance from source
        priority_queue< vector<int>, vector<vector<int>>, greater<vector<int>> > minHeap;
        minHeap.push( { 0, src, 0 } ); // cost, vertex, hops
        
        vector<int> dist(n+1, INT_MAX); //to avoid TLE
        
        while( !minHeap.empty() ) {
            auto t = minHeap.top(); minHeap.pop();
            int cost = t[0];
            int curr = t[1];
            int stop = t[2];
            
            if( curr == dst )
                return cost;
            
                //Optimization to avoid TLE
            if(dist[curr]<stop) continue;
                 dist[curr]=stop;

            if(stop >K ) continue;
            
                for( auto next : adjList[curr] )
                    minHeap.push( { cost+next.second, next.first, stop+1 });
        }
        return -1;
    }
};