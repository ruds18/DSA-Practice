class Solution {
public:
    int jump(vector<int>& nums) {
        int curReach= 0, maxReach=0 , jumps = 0;
        
        for(int i=0; i< nums.size()-1 ;  i++){
            maxReach = max(maxReach , i+nums[i]);
            
            if (i ==  curReach){
                jumps++;
                curReach = maxReach;
            }
        }
        return jumps;
    }
};