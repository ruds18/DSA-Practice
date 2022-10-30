class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int>avg;
        int cnt=0;
        int sum=0;
        int ans;
        for(int i=0; i<nums.size();i++){
            // Even nd divisible by 3;
           if(nums[i]%2 == 0 && nums[i]%3 ==0){
               sum += nums[i];
               cnt++;
           }        
        } 
        
        return cnt != 0 ? sum/cnt : 0 ;
    }
};