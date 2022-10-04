class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size(), "");
        int count=1;
   
        //Max Heap
        priority_queue<pair<int, int>>pq;
        
        for(int i=0;  i<score.size();i++) pq.push(make_pair(score[i],i));

        
        for(int i=0;i<ans.size();i++){
             if(count==1) {ans[pq.top().second] = "Gold Medal"; count++;}
            else if(count==2) {ans[pq.top().second] = "Silver Medal"; count++;}
            else if(count==3) {ans[pq.top().second] = "Bronze Medal"; count++;}
             else {ans[pq.top().second] = to_string(count); count++;}
            pq.pop();
}
        
        return ans;
    }
};