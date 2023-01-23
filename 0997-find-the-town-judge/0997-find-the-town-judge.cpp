class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // Graph approach
        
        vector<int>degree(n+1);
        
        for(auto t : trust){
            //count outdegree
            degree[t[0]]--;
            degree[t[1]]++;
        }
        int ans =-1;
        for(int i=1; i<degree.size();i++){
            if(degree[i] == n-1) ans = i;
        }
        return ans;
    }
};