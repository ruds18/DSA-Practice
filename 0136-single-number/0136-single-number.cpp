class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Bit Manuplaition
       for(int i=0; i<nums.size()-1;i++){
           nums[i+1] = nums[i] ^ nums[i+1];
       }
        return nums[nums.size()-1];
    }
};