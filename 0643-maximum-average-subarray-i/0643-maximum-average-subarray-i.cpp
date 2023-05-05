class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAverage = INT_MAX;
        double sum =0;
        int n = nums.size();
        // create k window
        for(int i=0 ;i<k;i++){
            sum += nums[i];
        }
        maxAverage = sum/k;
        
        // sliding window
        for(int i = k ; i<n;i++){
            sum  = sum + nums[i] - nums[i-k];
            maxAverage = max(sum/k , maxAverage);
        }
        
        return maxAverage;
    }
};