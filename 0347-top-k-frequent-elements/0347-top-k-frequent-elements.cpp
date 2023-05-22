class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto num : nums) mp[num]++;
        
        // {freq,number}
         priority_queue<pair<int,int>>pq;
        for(auto it : mp){
            pq.push({it.second , it.first});
        }
        
        vector<int>ans;
        // now pop k frequent elements
        while(!pq.empty() && k >0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        
        return ans;
    }
};