class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //Min Heap
        priority_queue<int,  vector<int>, greater<int>> pq;
        
        
        //Step1 
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
            if(pq.size() > k){
           pq.pop();
            }
        
        }
        
        return pq.top();
    }
};