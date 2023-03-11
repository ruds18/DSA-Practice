class Solution {
public:
    bool isPossible(vector<int>piles , int mid  , int H){
        int total = 0;
        for (int p : piles) 
                total += (p + mid - 1) / mid;
            if (total > H)
                return false;
            else
                return true;
    }
    
    
   int minEatingSpeed(vector<int>& piles, int H) {
        int l = 1, r = 1000000000;
        int ans =0;
        while (l < r) {
            int m = (l + r) / 2, total = 0;
            if(isPossible(piles , m, H)){
                ans = m;
                r = m;
            }else{
                l = m + 1;
            }
            
        }
        return l;
    }
};