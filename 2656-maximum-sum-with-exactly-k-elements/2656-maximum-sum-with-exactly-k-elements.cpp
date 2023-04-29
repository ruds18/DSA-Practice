class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto i: nums)pq.push(i);
        int sum=0;
        
        while(k > 0){
            int top = pq.top();
              pq.pop();
            sum += top;
            pq.push(top+1);
            k--;
        }
        return sum;
    }
};