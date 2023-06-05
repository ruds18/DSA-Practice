class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<vector<int>>ans;
        
        set<int>set1;
        set<int>set2;
        
        for(auto num1 : nums1) set1.insert(num1);
        for(auto num2 : nums2) set2.insert(num2);
        
        
        for(auto num1:set1)mp[num1]++;
        for(auto num2:set2)mp[num2]++;
        
        vector<int>result;
        for(auto num1:set1){
            if(mp[num1] == 1) result.push_back(num1);
        }
        ans.push_back(result);
        result.clear();
        for(auto num2:set2){
            if(mp[num2] == 1 ) result.push_back(num2);
        }
        ans.push_back(result);
        
        return ans;
    }
};

