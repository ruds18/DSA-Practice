#define MOD 1000000007

#define MODULE(x) ((x) % MOD)

class Solution 
{
public:
    int sumOfPower(vector<int>& nums) 
    {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        long long curSum = 0;
        long long result = 0;
        for (int i = 0; i < n; ++i)
        {
            long long curNum = nums[i];
            result = MODULE(result + MODULE((curSum + curNum) * MODULE(curNum * curNum)));                
            curSum = MODULE(2 * curSum + nums[i]);
        }
        return result;
    }
};