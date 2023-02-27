class Solution {
public:
   
   bool isPossible(vector<int>nums , int mid , int k ){
      int cut =1;
      int totalSum = 0;
      for(int i=0; i<nums.size(); i++){
          if(totalSum + nums[i] <= mid){
              totalSum += nums[i];
          }else{
              cut++;
              totalSum = nums[i];
              if(cut > k || nums[i] > mid ) return false;
          }
      }
      return true;
   }


    int splitArray(vector<int>& nums, int k) {

        int start = nums[0] , sum=0;
        for(auto i:nums) sum += i;
        int end = sum;
        int ans = -1;

        while(start<=end){
         int mid = start + (end - start)/2;

         if(isPossible(nums , mid, k )){
           ans = mid;
           end = mid-1;
         }else{
             start = mid+1;
         }
        }

        return ans;
    }

};