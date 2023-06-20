class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        // sliding window with size k+k+1;
        int wL = 2*k+1;
        int avg =0;
        long long  sum =0;
        vector<int>ans(nums.size(),-1);
        
          if (2 * k + 1 > nums.size()) {
            return ans;
        }

        for(int i=0; i<wL ;i++){
             sum += nums[i];
        }
         avg = sum/wL;
        ans[k] = avg;
        for(int i =wL ; i<nums.size();i++ ){
            sum -= nums[i-wL];
            sum += nums[i];
            
            avg = sum/wL;
            ans[i-k] = avg;
        }
        return ans;
    }
};