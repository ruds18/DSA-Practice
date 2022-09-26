class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                return {indices[target - nums[i]], i};
            }
            indices[nums[i]] = i;
        }
        return {};
    }
};


/* Let us Understand 
   //IMP-> we can not  sort the array because we have return the index according to the input
   
    [2,7,11,15] target =9
     two pointers = low and high
      high - low -> 15-2 == 9 ->false  || deviation > target -> high-1 
      high -low ->11-2 ==9 -> True - store in the vector and exit


 */