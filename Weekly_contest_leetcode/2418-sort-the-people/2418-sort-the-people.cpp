class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& height) {
      
        map<int, string> mp;
        for(int i=0; i<names.size();i++){
            mp[height[i]] = names[i];
        }
        //sorting the height array
        sort(height.begin(), height.end(), greater<int>());
        
        vector<string> ans;
        
        for(int i=0; i<names.size(); i++){
            ans.push_back(mp[height[i]]);
        }
        return ans;
    }
};