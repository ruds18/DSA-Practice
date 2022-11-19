class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Decalration
        vector<vector<int>> ans;
        
        // Step-1
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size()-2; i++){
          
            // Step-3
            if(i==0 || nums[i] != nums[i-1]){
                //Step -4
                 int low = i+1, high = nums.size()-1;
                while(low<high){
                    int sum  = nums[i] + nums[low] + nums[high];
                    if(sum < 0) low++;
                    else if(sum >0) high --;
                    else {
                        ans.push_back({nums[i], nums[low] , nums[high]});
                        while(low<high && nums[low] == nums[low+1]) low++;
                        while(low<high && nums[high] == nums[high-1]) high--;
                        low++;
                        high--;
                    }
                }
            }
        }
        return ans;
    }
};