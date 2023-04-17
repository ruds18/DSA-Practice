class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy=0;
        vector<bool>ans;
        for(auto candy:candies) maxCandy = max(maxCandy , candy );
        
        for(auto candy : candies){
            if(candy+extraCandies  < maxCandy){
                ans.push_back(false);
            }else ans.push_back(true);
        }
        return ans;
    }
};