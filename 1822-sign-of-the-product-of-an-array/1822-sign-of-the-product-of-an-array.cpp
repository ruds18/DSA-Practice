class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negCount=0;
        for(auto num: nums){
            if(num == 0) return 0;
            if(num < 0) negCount++;
        }
        if(negCount % 2 == 1) return -1;else return 1;
    }
};