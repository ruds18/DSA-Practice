class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int  n = nums.size();
        vector<int>ans;
        vector<int>prefix(n);
        vector<int>suffix(n);
        set<int>st;
        
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
            prefix[i] = st.size();
        }
         st.clear();
        for(int i=n-1;i>=0;i--){
            suffix[i] = st.size();
            st.insert(nums[i]);
        }
        
        for(int i=0; i<n;i++){
            ans.push_back(prefix[i]-suffix[i]);
        }
        
        return ans;
    }
};