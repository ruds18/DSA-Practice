class KthLargest {
public:
    priority_queue<int , vector<int> , greater<int>>pq;
    int kLargest;
    KthLargest(int k, vector<int>& nums) {
        kLargest = k;
        for(auto num:nums)add(num);
    }
    
    int add(int val) {
        if(pq.size() < kLargest){
            pq.push(val);
        }else{
            if(pq.top()  < val){
                pq.pop();
                pq.push(val);
            }
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */