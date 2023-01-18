class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int cur_max = 0 ,cur_min =0 , sum=0, max_sum = nums[0] , min_sum = nums[0];
        for(auto num : nums){
            cur_max = max(cur_max , 0)+ num;
            max_sum = max(max_sum , cur_max);
            cur_min = min(cur_min, 0) + num;
            min_sum = min(min_sum , cur_min);
            sum += num;
        }
        return sum == min_sum ? max_sum : max(max_sum , sum - min_sum);
    }
};