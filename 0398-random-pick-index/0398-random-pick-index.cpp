class Solution {
public:
    vector<int>globalNums;
    Solution(vector<int>& nums) {
        for(auto num : nums) globalNums.push_back(num);
    }
    
    int pick(int target) {
        int ans =0 , n = 0;
        for(int i=0; i<globalNums.size();i++){
            if(globalNums[i] != target) continue;
              n++;
            if(rand() % n == 0){ans = i;}// with prob 1/(n+1) to replace the previous index
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */