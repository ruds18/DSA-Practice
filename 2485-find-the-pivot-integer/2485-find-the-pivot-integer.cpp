class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = n * (n+1)/2;
        int left =0 , right = 0;
        for(int i=1; i<=n; i++){
            left += i;
            right  = totalSum - left + i;
            
            if(left == right) return i;
        }
        return -1;
    }
};