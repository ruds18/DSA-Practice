class Solution {
public:
    int arraySign(vector<int>& nums) {
       int negsignCount =0;
        for(auto num : nums){
            if(num< 0) negsignCount++;
            if(num == 0) return 0;
        }
        if(negsignCount %2 ==0) return 1;
        else return -1;
    }
};