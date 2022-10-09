class Solution {
public:
    int commonFactors(int a, int b) {
        int limit = max(a,b);
        int cnt=0;
        for(int i=1;i<=limit;i++){
            if(a%i ==0  && b%i ==0 ) cnt++;
        }
        return cnt;
    }
};