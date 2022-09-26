class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
            vector<int> ans;
         int n=nums.size();
        vector<int>l(n,1),r(n,1); // Intializing both the arrays with 1
        int i;
        for(i=1;i<=n-1;i++)
        {
            if(nums[i-1]>=nums[i]) //Decreasng order i.e non-increasing order
                l[i]+=l[i-1];
        }
        for(i=n-1;i>=1;i--)
        {
            if(nums[i-1]<=nums[i]) // Increasing order i.e non-decreasing order
                r[i-1]+=r[i];
        }

        for(i=k;i<n-k;i++)
        {
            if(l[i-1]>=k and r[i+1]>=k)
                ans.push_back(i);
        }
        return ans;
    }
};