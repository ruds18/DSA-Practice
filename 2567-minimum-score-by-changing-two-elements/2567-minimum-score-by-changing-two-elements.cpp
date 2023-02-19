class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        //sort
        sort(nums.begin(), nums.end());
        // making first two zero
        int case1 = nums.back() - nums[2];
        //making last two largest zero
        int case2 = nums[nums.size()-3] - nums[0];
        //making smallest and largest zero
        int case3 = nums[nums.size()-2] - nums[1];
        
        return  min({case1,case2,case3});
    }
};