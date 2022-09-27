class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice= INT_MAX, profit =0 ;
        for(int i=0;i<prices.size(); i++){
            minPrice = min(prices[i], minPrice);
            profit = max(profit, prices[i]-minPrice);
        }
        return profit;
    }
};