class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        //binary search
        int n = nums.size();
        vector<int>subSequence;
        subSequence.push_back(nums[0]);
        for(int i=1; i<n;i++){
            if(nums[i] > subSequence.back())subSequence.push_back(nums[i]);
            else{
                int index = lower_bound(subSequence.begin(),subSequence.end() , nums[i] ) - subSequence.begin();
                subSequence[index] = nums[i];
            }
        }
        return subSequence.size();
    }
};