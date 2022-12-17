class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Modified Binary Search
        int l =0;
        int h = nums.size()-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            
            if(nums[mid] == target) return mid;
            
            if(nums[mid] >= nums[l]){
                // Left part sorted
                if(target >= nums[l] && target<nums[mid]) h=mid-1;
                else l = mid+1;
            }else {
                // Right Part Sorted
                if(nums[h] >= target && nums[mid] <= target){
                    l = mid+1;
                }
                else{
                    h = mid-1;
                }
            }
        }
        return -1;
    }
};