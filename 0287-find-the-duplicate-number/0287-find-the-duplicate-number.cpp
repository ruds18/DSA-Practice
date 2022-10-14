class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int num =0;
        unordered_map<int, int> mp;
        for(int i=0 ;i<nums.size() ;i++){
             num = nums[i];
             mp[num]++;
            if(mp[num] > 1){
                return num;
            }
           
        }
        return num;
    }
    
};