class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>mp;
        int las=1;
        for(auto element : arr){
            las = max(las , (mp[element] = 1 + mp[element - difference]));
        }
        return las;
    }
};