class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
            int res = INT_MAX;
    sort(begin(nums), end(nums));
    for (int i = k - 1; i < nums.size(); ++i)
        res = min(res, nums[i] - nums[i - k + 1]);
    return res;
    }
};