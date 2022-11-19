class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Bit Manuplaition
        int ans=0;
        for(auto i : nums){
            ans = ans^i;
        }
        return ans;
    }
};