class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        
        for(auto str : strs){
            string res = str;
            sort(res.begin(), res.end());
            mp[res].push_back(str);
        }
        for(auto itr:mp){
            ans.push_back(itr.second);
        }
        return ans;
    }
};