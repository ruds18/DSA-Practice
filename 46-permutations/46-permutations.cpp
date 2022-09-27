class Solution {
    private:
    void solve(vector<int>& nums,  vector<vector<int>>& ans, int index ){
        //base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = index; i<nums.size(); i++){
            swap(nums[index], nums[i]);
            solve(nums, ans,index+1);
            //backtracking
             swap(nums[index], nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        //initializing the variables
        vector<vector<int>> ans;
        //function call
        solve(nums, ans,0);
        return ans;
    }
};