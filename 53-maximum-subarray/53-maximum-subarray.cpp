class Solution {
public:
    int maxSubArray(vector<int>& nums) {
             int MAX = INT_MIN;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            MAX = max(sum, MAX);
            if(sum < 0) sum = 0;
        }
        return MAX;
    }
};

/* Let us understand 
  Important Problem  - Kadane's Algo for maximum subarray 
  sorting can't be done 
   
   Concept:- 
        [1,2,4] => max  = 1+2+4  =>7 :) ⬆
        [1,2,4,-1] => if add all => 7 + -1  = 6 :( ⬇ 
        [1,2,4,-1,1] => [1,2,4] ✔️
    inference -> including -ve will decrease the continuous sum , will include only if the next elemnts increase it; 
     
      There lets have two variable - maxSum and curSum ;
   
     What if all elemnets are -ve?
      then maximum subarray will for the bigest element;
 */