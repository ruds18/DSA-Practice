class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         int n = candies.size();
        vector<bool>ans(n);
        for(int i =0; i<n; i++){
              int total = candies[i] + extraCandies;
            bool a = true;
            for(int j=0; j<n;j++){
                if(candies[j] > total){
                    a=false;
                    break;
                }
            }
             ans[i] = a;
        }
        return ans;
    }
};