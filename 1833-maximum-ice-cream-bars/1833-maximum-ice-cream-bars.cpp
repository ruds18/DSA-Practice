class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        //step 1 - sort
        sort(costs.begin() , costs.end());
        
        int ans=0;
        
        for(int i=0; i<costs.size();i++){
            if(coins <=0) break;
            if(costs[i] <= coins){
                ans++;
                coins -= costs[i];
            }
        }
        return ans;
    }
};