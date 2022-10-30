class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int>avg;
        int sum=0;
        int ans;
        for(int i=0; i<nums.size();i++){
            // Even
            if(nums[i]%2==0){
                // divisible by 3
                if(nums[i]%3==0){
                    avg.push_back(nums[i]);
                }
            }
        }
        if(avg.size() == 0) return 0;
        //average
        for(int i=0 ;i<avg.size();i++){
             sum += avg[i];
        }
        return round(sum/avg.size());
    }
};