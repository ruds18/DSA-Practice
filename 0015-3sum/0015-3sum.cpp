class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // triplets -> sum =0;
        vector<vector<int>> ans;
     
        // Step 1 - sort the nums 
        sort(nums.begin(), nums.end()); // O(log n)
        
        for(int i=0; i<nums.size()-2;i++){
           //Step-2 - fix a number 
           if(i==0 || nums[i] != nums[i-1]) {
               
               int low = i+1, high = nums.size()-1;
               
               // Step 4 - Binary Search
               while(low<high){
                   int sum = nums[low]+ nums[high] + nums[i];
                   if(sum == 0) {
                       ans.push_back({nums[low], nums[high], nums[i]});
                      while(low < high && nums[low] == nums[low+1]){
                          low++;
                      }
                         while(low < high && nums[high] == nums[high-1]){
                          high--;
                      }
                       low++;
                       high--;
                   }
                   else if(sum < 0){
                       low++;
                   }
                   else{
                       high--;
                   }
               }
           }
        }
        return ans;
    }
        
};