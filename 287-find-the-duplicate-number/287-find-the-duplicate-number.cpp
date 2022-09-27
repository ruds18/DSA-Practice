class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int ans;
       vector<pair<int, int>>p;
        for(int i=0  ;i< nums.size() ; i++){
            p.push_back({nums[i], i});
        }
        sort(p.begin(),p.end());
        
        for(int i=0 ; i<p.size()-1; i++){
            if(p[i].first == p[i+1].first){
                ans = p[i].first;
                break;
            }
        }
        return ans;
    }
};