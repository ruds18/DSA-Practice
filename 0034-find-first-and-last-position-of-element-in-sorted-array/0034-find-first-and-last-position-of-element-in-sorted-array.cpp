class Solution {
public:
    
   int  firstIndex(vector<int>&nums , int target){
        int ans = -1;
        int start = 0;
        int end = nums.size()-1;
        
        while(start <=end){
            int mid = (start+end)/2;
            
            if(target == nums[mid]){
                ans = mid;
                // look for leftmost part
                end = mid-1;
            }
            else if(target > nums[mid]){
                start  = mid+1;
            }else end = mid-1;
        }
        return ans;
    }
    
   int  lastIndex(vector<int>&nums,int target){
        int ans =-1;
        int start = 0;
        int end  = nums.size()-1;
        
        while(start<=end){
            int mid = start + (end - start)/2;
            
            if(target == nums[mid]){
                ans = mid;
                // look for rightmost part
                start = mid+1;
            }
            else if(target > nums[mid]) start = mid+1;
            else end = mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(firstIndex(nums , target));
        ans.push_back(lastIndex(nums,target));
        return ans;
    }
};