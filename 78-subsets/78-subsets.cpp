class Solution {
private:
    void solve(vector<vector<int>> &ans, vector<int>output,vector<int>& nums, int index  ){
        //base case
        if(index >= nums.size()){
           ans.push_back(output);
            return ;
        }
        
        //Exclude
        solve(ans,output,nums,index+1);
        
        //Include
        int element = nums[index];
        output.push_back(element);
        solve(ans,output,nums,index+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        //initializing the variables
        vector<vector<int>> ans;
        vector<int>output;
        
        //function call
        solve(ans,output,nums,0);
        return ans;
    }
};