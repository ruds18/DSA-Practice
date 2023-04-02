class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
           
        sort(nums.begin(), nums.end());
       int closestSum = nums[0]+nums[1]+nums[2];
        int n  = nums.size() ;
        
        for(int first = 0 ; first < n-2 ; first++ ){
            int second = first+1 , third = n-1;
            
            while(second < third){
                
                int sum = nums[second] + nums[first] + nums [third];
                 if(closestSum == target) return closestSum;
                if(abs(target - sum)  < abs(target - closestSum)) closestSum = sum;
                
               if(sum < target) second++;
                else third--;
            }
            
        }
        return closestSum;
    }
};