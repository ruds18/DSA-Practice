class Solution {
public:
    
    bool isPossilbeAns(vector<int>weights , int totalDays , int mid){
        int totalWeight = 0;
        int days =1;
        
        for(int i=0; i<weights.size();i++){
            if(totalWeight + weights[i] <= mid){
                totalWeight += weights[i];
            }else{
                days++;
                if(days > totalDays || weights[i] > mid) return false;
                totalWeight = weights[i];
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int start = 0;
        int end =0;
        for(auto i:weights) end+= i;
        int ans =-1;
        
        while(start<=end){
            int mid  = start +(end-start)/2;
            
            if(isPossilbeAns(weights , days , mid)){
                ans = mid;
                end = mid-1;
            }else{
                start = mid + 1;
            }
        }
        return ans;
    }
};