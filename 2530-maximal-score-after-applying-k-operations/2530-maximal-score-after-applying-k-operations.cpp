class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        // every time select maximum val
        //max heap
        priority_queue<long long>maxHeap;
        for(int i=0; i<nums.size(); i++){
            maxHeap.push(nums[i]);
        }
        
        long long ans=0;
        
        while(!maxHeap.empty() && k>0){
            long long front = maxHeap.top();
            maxHeap.pop();
            
            ans += front;
            k--;
            
            maxHeap.push(ceil((front + 2) / 3));
            
        }
        return ans;
    }
};