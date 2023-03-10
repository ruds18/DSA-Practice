class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto  num : nums){
            pq.push(num);
        }
        int ans =0;
        while(k>0){
            ans = pq.top();
            pq.pop();
            k--;
        }
        return ans;
    }
};