class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //Sorting the vector
        sort(nums.begin(), nums.end());
        //Traverse the array
        for(int i=1 ; i<nums.size(); i++){
            if(nums[i] == nums[i-1]) return true;

        }
        return false;
    }
};

/* Let us Understand  
   at least twice apperance-> true else false
   1) just sort the array 
   2) arr[n] == arr[n-1] ->false
   [1,2,3,1] after sort-> [1,1,2,3] -> true
   3)edge cases - nums.size() == 1 ->true
   
   
*/